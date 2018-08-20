#include <stdio.h>
#include <math.h>
 int main ()
	{
	float y1,y2,y3,x,e;
	printf("inserta el valor de x \n");
	scanf("%f",&x);
	
	y1 = exp(x*-1);
	printf("y = exp(-x) es igual %f \n",y1);

	y2 = cos((3.1416/180)*x) +(2*(tan(((3.1416/180)*x)/2)));

	printf("y = cos(x) + 2tan(x/2) es igual  %f \n ",y2);

	y3 = log(x) + (3*(pow(x,2)));

	printf("y = ln(x)+ 3x^2 es igual %f \n",y3);
	
	}
