#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void entrar();
int main(int arg, char *argt[])
{
	printf("El programa que estas ejecutando es: %s\n", argt[0]);
if (arg < 3){
	printf("Debes ingresar mas parametros...\n");
		 return 1;
}
else
{
	char *nom;
	float p,x,y,z;
	int n;
	n = atoi(argt[1]);
	p = atof(argt[2]);
	nom = argt[3];
	FILE *re;
	strcat(nom,".txt");
	re =fopen(nom,"w");
	fprintf(re,"	x 	||	y	||	z	\n");
				for(int i =0;i < n;i++){
							x+=p;
							y+=p;
							z+=p;
							fprintf(re,"	%f		%f		%f	\n",x,y,z);
			}
		fclose(re);
}
}
