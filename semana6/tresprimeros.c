#include<stdio.h>
	int main(){
	int N = 10,i;	
	float num [N];
	for(i = 0; i < N; i++){num[i]=0;}	
	printf("escribe numeros\n");
		
	for (i = 0; i < N; i++){
		scanf("%f",&num[i]);	
	}
	for (i = 0; i < N; i++){
		printf("%f \n",num[i]);	
	}
			
}
