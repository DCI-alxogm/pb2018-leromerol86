#include <stdio.h>
	int main (){
	char respuesta [15];
	int edad;
	printf("Selecciona tu genero(escribelo como se muestra): \n Hombre \n Mujer \n");
	scanf("%s",&respuesta);
	printf("¿Cual es tu edad? \n");
	scanf("%i",&edad);			
		if(respuesta == 'Hombre'){
			if(edad <18){
				printf("no dejes la escuela \n");			
			}else if(edad > 35){
				printf("se te fue el tiempo \n");		
			}else {
				printf("Busca trabajo \n");			
			}
		}else{	
		printf("Es muy joven señorita \n");
	}			
}
