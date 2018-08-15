#include<stdio.h>
	int main (){
		int a,b,c,d,e;
		printf("inserta 4 numeros, uno encada salto: \n");
		scanf("%i",&a);
		scanf("%i",&b);
		scanf("%i",&c);
		scanf("%i",&d);	
			e = (a+b)*c/d;
		printf("e=(a+b)*c/d: \n > %i \n ",e);		
			e = ((a+b)*c)/d;
		printf("e=((a+b)*c)/d: \n > %i \n ",e);
			e = (a+b)*c/d;
		printf("e=(a+b)*c/d: \n > %i \n ",e);
			e = a+(b*c)/d;
		printf("e=a+(b*c)/d: \n > %i \n ",e);
}
