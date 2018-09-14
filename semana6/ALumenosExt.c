#include <stdio.h>
#include <string.h>

int main() {
  int sex[10],sem [10],as[9]={0,0,0,0,0,0,0,0,0},hom =0, mu= 0,s= 1;
  float prom [10],fp = 0;
  char dir [255];
  printf("Escribe el nombre del archivo (sin extención)\n");
  scanf("%s", &dir);
  strcat(dir,".txt");
  FILE *fd,*re;
  fd = fopen(dir,"r");
  if (fd == NULL) {
    printf("Error. Archivo no encontrado\n");
  }
  fscanf(fd,"%i %i %i %i %i %i %i %i %i %i", &sex[0] ,&sex[1],&sex[2],&sex[3],&sex[4],&sex[5],&sex[6],&sex[7],&sex[8],&sex[9]);
  fscanf(fd,"%i %i %i %i %i %i %i %i %i %i", &sem[0] ,&sem[1],&sem[2],&sem[3],&sem[4],&sem[5],&sem[6],&sem[7],&sem[8],&sem[9]);
  fscanf(fd,"%f %f %f %f %f %f %f %f %f %f", &prom[0] ,&prom[1],&prom[2],&prom[3],&prom[4],&prom[5],&prom[6],&prom[7],&prom[8],&prom[9]);
  fclose(fd);
  for(int i = 0;i < 10; i++){
		if(sex[i]==0){hom++;}else{mu++;}
	}
		for(int i = 0 ; i <= 10 ; i++){
		switch(sem[i]){
				case 1:
					as[0]++;
				break;
				case 2:
					as[1]++;
				break;
				case 3:
					as[2]++;
				break;
				case 4:
					as[3]++;
				break;
				case 5:
					as[4]++;
				break;
				case 6:
					as[5]++;
				break;
				case 7:
					as[6]++;
				break;
				case 8:
					as[7]++;
				break;
				case 9:
          as[8]++;
				break;
				}
	}
		for(int i = 0;i < 10;i++){fp =fp +prom[i];}
	  fp=fp/10;
    re = fopen("respuesta.txt","w");
    fprintf(fd, "-----------------Alumnos por semestre------------------- \n");
    for(int i = 0;i < 9; i++){
      if (as[i]==0) {} else {
    fprintf(re,"De semestre %i son %i \n",s,as[i]);
    }s++;}
    fprintf(fd, "-----------------Alumnos por genero-------------------\n");
    fprintf(re,"Son %i hombre y %i mujeres\n",hom ,mu);
    fprintf(fd, "-----------------Final-------------------\n");
	  fprintf(re,"El promedio es de %f",fp);
}
