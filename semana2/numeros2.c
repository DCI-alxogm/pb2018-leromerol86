#include<stdio.h>
	int main (){
		float a,b,c,d,e;
		printf("inserta 4 numeros, uno encada salto: \n");
		scanf("%f",&a);
		scanf("%f",&b);
		scanf("%f",&c);
		scanf("%f",&d);	
			e = (a+b)*c/d;
		printf("e=(a+b)*c/d: \n > %f \n ",e);		
			e = ((a+b)*c)/d;
		printf("e=((a+b)*c)/d: \n > %f \n ",e);
			e = (a+b)*c/d;
		printf("e=(a+b)*c/d: \n > %f \n ",e);
			e = a+(b*c)/d;
		printf("e=a+(b*c)/d: \n > %f \n ",e);
}
