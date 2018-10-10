#include<stdio.h>
void Cuadrado(float x){
	float x2;	
	x2=x*x;
	printf("Elcuadrado de %f es %f \n",x,x2);
}
int main(){
	float x;
	printf("Introduce un numero \n");
	scanf("%f",&x);
	Cuadrado(x);
}

