#include <stdio.h>
#include <string.h>
	int main (){
	char respuesta [15];
	int edad;
	printf("Selecciona tu genero(escribelo como se muestra): \n 1)hombre \n 2)mujer \n");
	scanf("%s",&respuesta);
	printf("¿Cual es tu edad? \n");
	scanf("%i",&edad);			
		if( strcmp(respuesta,"hombre" )== 0){
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
