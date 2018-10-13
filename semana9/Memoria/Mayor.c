#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
	int main(){
	FILE *arc;
	char dir[255];
	char Nombre[255];
	printf("Escribe el nombre del archivo(sin Extensión)");
	scanf("%s",dir);
	int s=0, p;
		float *n, t=-10000000, *y;
		char num[20];
		strcat(dir,".txt");//Concateno el nombre del archivo con el .txt
		arc=fopen(dir,"r");//Se abre el archivo para extraer los datos
		while(fgets(num, 20, arc)!=NULL){s++;}
		fclose(arc);
		arc=fopen("num_maximo.txt", "r");
		n= (float*) malloc (s*sizeof(float));
		for(int i=0 ; i<s ; i++){
			fscanf(arc, "%f", n+i);
			if(*(n+i)>t){
				t=*(n+i);
				p=i+1;
				y=n;
			}
		}

		printf("La lista tiene %i cifras\n", s);
		printf("Número maximo: %f \n Lugar en la memoria:%i\n Lugar en la lista: %i\n", t, y, p);
	free(n);
}
