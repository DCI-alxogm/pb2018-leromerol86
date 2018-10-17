#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void entrar();
int main(){
float p,x,y,z;
int n,C;
char nom[255];
entrar(&n,&p,&nom);
FILE *re;
strcat(nom,".txt");
re =fopen(nom,"w");
printf("%s \n",nom);
fprintf(re,"	x 	||	y	||	z	");
		for(int i =0;i < n;i++){
		fprintf(re,"	%f		%f		%f	",x,y,z);
			x+=p;
			y+=p;
			z=+p;
	}
}
