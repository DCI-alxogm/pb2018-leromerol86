#include<stdio.h>
	int main (){
		char genero[15];
		int edad;	
		printf("Dime tu género (Solo H/M ): \n >:");
		scanf("%s",&genero);		
		printf("Dime tu edad: \n >:");
		scanf("%i",&edad);						
		if (genero == "Hombre")	
		{	
			printf("Ya estas ruco \n");
		}else
			{
			if (edad > 35){
				printf("bueno");			
			}else 								
			{
				printf("sigue estudiando \n");				
			}		
		}
			
	}
