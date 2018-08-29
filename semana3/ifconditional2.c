#include<stdio.h>
	int main (){
		int a,b;	
		printf("Dime un numero: \n >:");
		scanf("%i %i",&a,&b);							
		if (a==b)	
		{	
			printf("Resultado: %i = % i \n",a,b);
		}else if (a>b){
			printf("Resultado: %i > % i \n",a,b);
		}else {
			printf("Resultado: %i < % i \n",a,b);		
			}
			
	}
