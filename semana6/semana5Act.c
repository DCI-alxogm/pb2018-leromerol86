#include <stdio.h>
#include <math.h>
int main (){
		float valor,valor2, inte,num,num1,num2,num3,num4,num5;
		int i,t;
		printf("Danos tu intervalo: \n");
		scanf("%f %f",&valor, &valor2);
		printf("Danos tu espaciado: \n");
		scanf("%f",&inte);
if(valor < valor2){
		t = (valor2 - valor)/inte;
		FILE *fd,*re;
		fd = fopen("intervalo.txt","w");
	for(i=0;i<=t;i++){
		fprintf(fd,"x es igual a %f \n",valor);
		num= exp(valor);
		fprintf(fd,"exp de x = %f \n",num);
		num1= log(valor);
		fprintf(fd,"logaritmo de x = %f \n",num1);
		num2= sin(valor);
		fprintf(fd,"seno de x = %f  \n",num2);
		num3= cos(valor);
		fprintf(fd,"coseno de x = %f \n",num3);
		num4= sqrt(valor);
		fprintf(fd,"raiz de x = %f \n",num4);
		fprintf(fd, "------------------------------------\n");
		valor= valor+inte;
		}
	fclose(fd);
}
else
{
		t = (valor - valor2)/inte;

		FILE *fd,*re;
		fd = fopen("intervalo.txt","w");
	for(i=0;i<=t;i++){
		fprintf(fd,"x es igual a %f \n",valor2);
		num= exp(valor);
		fprintf(fd,"exp de x = %f \n",num);
		num1= log(valor);
		fprintf(fd,"logaritmo de x = %f \n",num1);
		num2= sin(valor);
		fprintf(fd,"seno de x = %f  \n",num2);
		num3= cos(valor);
		fprintf(fd,"coseno de x = %f \n",num3);
		num4= sqrt(valor);
		fprintf(fd,"raiz de x = %f \n",num4);
		fprintf(fd, "------------------------------------\n");
		valor2= valor2+inte;
		}
	  fclose(fd);
	}
}
