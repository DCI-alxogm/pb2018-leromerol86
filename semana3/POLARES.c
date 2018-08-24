#include <stdio.h>
#include <math.h>
	int main (){
	float x,y,z,r,a;			
		printf("intorduce el valor de x\n");
		scanf("%f",&x);
		printf("intorduce el valor de y\n");
		scanf("%f",&y);
		r=sqrt(pow(x,2)+pow(y,2));
	y=(180/3.1416)*y;
	x=(180/3.1416)*x;
	a=atan(y/x);
	x=(3.1416/180)*x;
	y=(3.1416/180)*y;
	printf("r es:%f\n",r);
	printf("a es:%f\n",a);
	printf("Tu coordenada de x:%f\n",x);
	printf("Tu coordenada de y:%f\n",y);

}
