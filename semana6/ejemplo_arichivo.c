#include "stdio.h"
int main() {
FILE *archivo;
float var1,var2;
char var[255];
//ESCRITURA
archivo = fopen("examen.txt", "w");
fputs("Es una prueba de fputs de la semana 6\n", archivo);
fprintf(archivo,"Esta linea es un printf\n");
fprintf(archivo, "%f %f \n", 3.1416,101.56);
fclose(archivo);
//LECTURA
archivo = fopen("examen.txt", "r");
fgets(var,255,(FILE*)archivo);
printf("%s",var);
fscanf(archivo,"%s",var);
printf("%s\n",var);
fscanf(archivo,"%f %f",&var1,&var2);
printf("%f %f\n",var1,var2);
fclose(archivo);
}
