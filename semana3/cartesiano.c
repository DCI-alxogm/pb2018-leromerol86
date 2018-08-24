#include <stdio.h>
#include <math.h>
 int main ()
	{
	float x,y,z,r,p,a;
		printf("intorduce el valor de x\n");
		scanf("%f",&x);
		printf("intorduce el valor de y\n");
		scanf("%f",&y);
		printf("intorduce el valor de z\n");
		scanf("%f",&z);
			r=sqrt(pow(d,2)+pow(y,2)+pow(z,2));
			y=(180/3.1416)*y;
			z=(180/3.1416)*z;
			x=(180/3.1416)*x;
			a=acos(z/r);
			p=atan(y/d);
			d=(3.1416/180)*x;
			x=(3.1416/180)*y;
			z=(3.1416/180)*z;
		printf("el valor de r es:%f\n",r);
		printf("el valor de teta es:%f\n",a);
		printf("el valor de phi es:%f\n",p);
		printf("tu coordenada inicial para x fue:%f\n",x);
		printf("tu coordenada inicial para y fue:%f\n",y);
		printf("tu coordenada inicial para z fue:%f\n",z);
				
}
