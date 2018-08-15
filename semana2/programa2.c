#include <stdio.h>
int main () {
	int edad = 0;
	char nombre[15];
		printf ("¿Cual es tu nombre? \n >: ");	
		scanf("%s",&nombre);	

	printf ("insertar tu edad \n >: ");	
	scanf("%i",&edad);
		edad+= 10;
		
	printf("%s,tu edad en el futuro sera: %i \n",nombre,edad);
	return 0;
}
