
#include<stdio.h>

int main(int argc, char *argv[]){
	printf("el programa que estas ejecutando es: %s\n", argv[0]);

	if(argc==2){
		printf("el argumento que se dio es: %s\n", argv[1]);
		}
	else if(argc>2){
		printf("mas argumentos de los necesarios\n");
		}
	else{
		printf("se requiere al menos 1 argumento\n");
		}
	return 0;
}
