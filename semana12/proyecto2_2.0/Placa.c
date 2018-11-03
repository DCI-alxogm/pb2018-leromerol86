#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funci.h"
double PuntosV(double a,double b,double c, double d);
int tmp(int argc, char*argv []){
		int n = atoi(argv[1]),o,i,c =0,e;
    char name [255];
    double T[n][n],Br[4],x ,y, delta;
//asignación de valores a los lados, la función "atof" convierte los caracteres a valores doubles
		Br [0] = atof(argv[2]);
		Br [1] = atof(argv[3]);
		Br [2] = atof(argv[4]);
		Br [3] = atof(argv[5]);
		e = atof(argv[6]);
		FILE *rep;
		//se inicializan los valores a 0
		for (i = 0; i < n; i++) {
			for (o = 0; o < n; o++) {
					T[i][o] = 0;
				}
		}
		//se le asigna un valor inicial al diferencia de las temperaturas, para evitar un conflicto al iniciar el programa
		int re = (n-2)*(n-2);
		delta=e+1;
		while (delta > e) {
    while (c < re) {
      sprintf(name,"resultado%i.txt",c);
       rep = fopen(name,"w");
			 //asignación de los valores estaticos
            		for ( i = 0; i < n; i++) {
            			for ( o = 0; o < n; o++) {
										//condición para las esquinas
            						if((i == 0 || i == (n-1) )&& (o == 0 || o == (n-1))){
            							 	if (i == 0){x = Br[0];}else{x = Br[2];}
            							 	if (o == 0){y = Br[1];}else{y = Br[3];}
            							 T[i][o]= (x+y)/2;
									//condición para los laterales, tomando encuenta su posición para diferentes cantidades de puntos
            			 }else if (i == 0 && o < (n-1) && o > 0) {
            				 	 			T[i][o] = Br[0];
            			 }else if (i == (n-1) && o < (n-1) && o > 0) {
            				 				T[i][o] = Br[1];
            			 }else if (o == 0 && i < (n-1) && i > 0) {
            				 				T[i][o] = Br[3];
            			 }else if (o == (n-1) && i < (n-1) && i > 0) {
            				 					T[i][o] = Br[2];
            			 }
									 //impresión de los datos en los archivos
                   fprintf(rep,"%f ",T[o][i]);
            		}
                	fprintf(rep,"\n ");
              }
							//asignación de valores a los puntoscentrales de la placa
                    for ( i = 1; i < (n-1); i++) {
                      for ( o = 1; o < (n-1); o++) {
                        if (i != (n-(i+1)) && o != (n-(o+1))) {
													//Se realizó un caso diferente para que realizar los calculos desde afuera hacia adentro de la placa.
																	delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];//Esta función evalua cada diferente punto para epsilon, de esta forma asegurando la presición en cada punto
                                 T[i][o] = PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);//Esta función realiza el nuevo valor de cada punto al transcurir cada periodo
												 } else if (i != (n-(i+1)) && o == (n-(o+1))) {
																	delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];//Esta función evalua cada diferente punto para epsilon, de esta forma asegurando la presición en cada punto
                                 T[n-(i+1)][o] =  PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);//Esta función realiza el nuevo valor de cada punto al transcurir cada periodo
                         }else if (i == (n-(i+1)) && o != (n-(o+1))) {
																delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];//Esta función evalua cada diferente punto para epsilon, de esta forma asegurando la presición en cada punto
                                 T[i][n-(o+1)] = 	PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);//Esta función realiza el nuevo valor de cada punto al transcurir cada periodo
                         }	else if (i == (n-(i+1)) && o == (n-(o+1))) {
																	delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];//Esta función evalua cada diferente punto para epsilon, de esta forma asegurando la presición en cada punto
                                 T[n-(i+1)][n-(o+1)] = PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);//Esta función realiza el nuevo valor de cada punto al transcurir cada periodo
                         }
                      }

                  }
      c++;//Este incrmento nos permite realizar el proceso hasta que se halla alcanzado el punto maximo de puntos, evitando el ciclado de esta aplicación

		}
	}
}
