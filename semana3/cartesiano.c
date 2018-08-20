#include <stdio.h>
#include <math.h>
 int main ()
	{
	float x,x1,y,y1,z,z1,r,o,e;
		printf("inserta x: \n");
		scanf("%f",&x );
		printf("inserta y: \n");
		scanf("%f",&y );		
		printf("inserta z: \n");
		scanf("%f",&z );
		r = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
		printf("r = %f \n",r);
		o = atan ((sqrt(pow(x,2) + pow(y,2)))/z);
		printf("el angulo es : %f \n",o);
		y =(3.1416/180) * y;
		x =(3.1416/180) * x;
		e = (atan(y/x))*(180/3.1416);
		
		printf("e es : %f \n",e);
		
		x1 = r*(sin(((3.1416/180)*o)*(180/3.1416)))*(cos((3.1416/180)*e)*(180/3.1416));
		printf("x es : %f \n",x1);
		y1 = r*(sin(((3.1416/180)*o)*(180/3.1416)))*(sin((3.1416/180)*e)*(180/3.1416));
		printf("y es : %f \n",y1);
		z1 = r*(cos((3.1416/180)*e)*(180/3.1416));
		printf("z es : %f \n",z1);
				
	}
