#include <stdio.h>
#include <math.h>

int main (){
		float valor,valor2, inte,num;
		int i,t;
		printf("Danos tu intervalo: \n");
		scanf("%f %f",&valor, &valor2);
		printf("Danos tu espaciado: \n");
		scanf("%f",&inte);
if(valor < valor2){		
		t = (valor2 - valor)/inte;
	for(i=0;i<=t;i++){			
		printf("x es igual a %f \n",valor);
		num= exp(valor);
		printf("exp de x = %f \n",num);				
		num= log(valor);
		printf("logaritmo de x = %f \n",num);
		num= sin(valor);
		printf("seno de x = %f  \n",num);
		num= cos(valor);
		printf("coseno de x = %f \n",num);
		num= sqrt(valor);
		printf("raiz de x = %f \n",num);		
		valor= valor+inte;		
		}
}
else
{
		t = (valor - valor2)/inte;
	for(i=0;i<=t;i++){			
		printf("x es igual a %f \n",valor2);
		num= exp(valor2);
		printf("exp de x = %f \n",num);				
		num= log(valor2);
		printf("logaritmo de x = %f \n",num);
		num= sin(valor2);
		printf("seno de x = %f  \n",num);
		num= cos(valor2);
		printf("coseno de x = %f \n",num);
		num= sqrt(valor2);
		printf("raiz de x = %f \n",num);		
		valor2= valor2+inte;		
		}
	}						
}
