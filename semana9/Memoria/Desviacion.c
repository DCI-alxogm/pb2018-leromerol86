#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int count;
    float *r, suma, DV=0;
    char var[40],dir[255];
    FILE *arc;
    printf("Escribe el nombre del archivo(sin Extensión)");
    scanf("%s",dir);
    strcat(dir,".txt");//Concateno el nombre del archivo con el .txt
    arc=fopen(dir,"r");//Se abre el archivo para extraer los datos
    while (fgets(var, 40, arc)!=NULL){
           count ++;
            }
      fclose(arc);
    arc=fopen(dir, "r");
    r=(float*) malloc(count*sizeof(float));
    for (int i=0; i<count; i++){
        fscanf(arc, "%f", r+i);
        suma+=*(r+i);
}
    fclose(arc);

    suma/=count;

    for (int i=0; i<count; i++){
        DV+=pow((*(r+i)-suma),2);
}

    DV/=count;
    DV=sqrt(DV);

free (r);

printf("Número de datos: %i\n", count);
printf("Promedio = %f\n", suma);
printf("Desviacion standar = %f\n", DV);

return 0;
}
