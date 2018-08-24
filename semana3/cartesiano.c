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
			r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
			y=(180/3.1416)*y;
			z=(180/3.1416)*z;
			x=(180/3.1416)*x;
			a=acos(z/r);
			p=atan(y/x);
			x=(3.1416/180)*x;
			y=(3.1416/180)*y;
			z=(3.1416/180)*z;
			printf("El valor de r es:%f\n",r);
			printf("El valor de teta es:%f\n",a);
			printf("El valor de phi es:%f\n",p);
			printf("Tu coordenada x es:%f\n",x);
			printf("Tu coordenada y es:%f\n",y);
			printf("Tu coordenada z es:%f\n",z);
}
