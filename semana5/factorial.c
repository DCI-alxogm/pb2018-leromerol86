#include<stdio.h>
		int main () 
		{
	int num,i,fac,T;
	T=1;	
	char rep[2];
	while(T==1){	
		printf("Escriba un numero (entero)\n");
		scanf("%i",&num);
		fac= num; 
			for(i = 1; i < num ;i++)
				{						
					fac = fac*i;			
		
				}			
					printf("%i \n",fac);
					printf("quieres hacer otra operación?");		
					scanf("%s",&rep);
					if(rep[0]=='n'||rep[0]=='N' ){T=0;}		
			}
}	
