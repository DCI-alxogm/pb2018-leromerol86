#include<stdio.h>
void Cuadrado(){
	float x,x2;
	printf("Introduce un numero \n");
	scanf("%f",&x);
	x2=x*x;
	printf("Elcuadrado de %f es %f \n",x,x2);
}
int main(){
	Cuadrado();
}

