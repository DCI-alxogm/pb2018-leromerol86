#include<stdio.h>
	int main(){
	int N = 10,i;
	/*se puede realizar el array de forma dinamica con un scanf("%i",N), sin embargo esto no es lo correacto ya que el copilador no sabe que s un almacenamiento de memoria dinamico*/	
	float num [N];
	printf("escribe numeros\n");
	for (i = 0; i < N; i++){
		scanf("%f",&num[i]);	
		num[i]*=2;
		printf("%f \n",num[i]);	
	}
			
}
