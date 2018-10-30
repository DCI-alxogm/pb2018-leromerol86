#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double PuntosV(double a,double b,double c, double d);
int main(int argc, char*argv []){
		int n = atoi(argv[1]),o,i,c =0,e;
    char name [255];
    double T[n][n],Br[4],x ,y, delta;
		Br [0] = atof(argv[2]);
		Br [1] = atof(argv[3]);
		Br [2] = atof(argv[4]);
		Br [3] = atof(argv[5]);
		e = atof(argv[6]);
		FILE *rep;
		for (i = 0; i < n; i++) {
			for (o = 0; o < n; o++) {
					T[i][o] = 0;
				}
		}
    int re = (n-2)*(n-2);
	delta=e+1;
		while (delta > e) {
    while (c < re) {
      sprintf(name,"resultado%i.txt",c);
       rep = fopen(name,"w");
            		for ( i = 0; i < n; i++) {
            			for ( o = 0; o < n; o++) {
            						if((i == 0 || i == (n-1) )&& (o == 0 || o == (n-1))){
            							 	if (i == 0){x = Br[0];}else{x = Br[2];}
            							 	if (o == 0){y = Br[1];}else{y = Br[3];}
            							 T[i][o]= (x+y)/2;
            			 }else if (i == 0 && o < (n-1) && o > 0) {
            				 	 			T[i][o] = Br[3];
            			 }else if (i == (n-1) && o < (n-1) && o > 0) {
            				 				T[i][o] = Br[1];
            			 }else if (o == 0 && i < (n-1) && i > 0) {
            				 				T[i][o] = Br[0];
            			 }else if (o == (n-1) && i < (n-1) && i > 0) {
            				 					T[i][o] = Br[2];
            			 }
                   fprintf(rep,"%f ",T[o][i]);
            		}
                	fprintf(rep,"\n ");
              }
                    for ( i = 1; i < (n-1); i++) {
                      for ( o = 1; o < (n-1); o++) {
                        if (i != (n-(i+1)) && o != (n-(o+1))) {
																	delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];
                                 T[i][o] = PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);
												 } else if (i != (n-(i+1)) && o == (n-(o+1))) {
																	delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];
                                 T[n-(i+1)][o] =  PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);
                         }else if (i == (n-(i+1)) && o != (n-(o+1))) {
																delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];
                                 T[i][n-(o+1)] = 	PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);
                         }	else if (i == (n-(i+1)) && o == (n-(o+1))) {
																	delta = (PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1])-T[i][o])/T[i][o];
                                 T[n-(i+1)][n-(o+1)] = PuntosV(T[i+1][o],T[i-1][o],T[i][o+1],T[i][o-1]);
                         }
                      }

                  }
      c++;

		}
	}
}
