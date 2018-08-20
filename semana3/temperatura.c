#include <stdio.h>
	int main ()
		{
			float tem,k,f,c;
		
			printf("Inserte la temperatura Actual: \n");
			scanf("%f",&tem);
			f = ((tem*9)/5)+32;
			k = tem+ 273;	
			c = ((f-32)*5)/9;			
			printf("la temperatura en Farenheit es %f \n",f);				
			printf("la temperatura en Kelvin es %f \n",k);				
			printf("la temperatura en Celcius es %f \n",c);				
				

		}
