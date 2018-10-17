#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void entrar(int *n,float *p,char *nom){
int C;
printf("Inserte la cantidad de puntos (por lado)");
scanf("%i",&*n);
printf("Inserte la separación en cada punto");
scanf("%f",&*p);
printf("Inserte la longitud del nombre");
scanf("%i",&C);
nom = (char *)malloc(C);
printf("Inserte el nombre del archivo donde se guardará");
scanf("%s",&*nom);

}
