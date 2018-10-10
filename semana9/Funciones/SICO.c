#include<stdio.h>
float Cuadrado(){
	float x;
	printf("Introduce un numero \n");
	scanf("%f",&x);
	return x*x;
}
int main(){
	float x2;	
	x2 = Cuadrado();
	printf("El cuadrado es %f \n",x2);	
}

