#include<stdio.h>
	int main(){
		int sex[10], sem [10],as[9]={0,0,0,0,0,0,0,0,0},hom =0, mu= 0,s= 1;
		float prom [10],fp = 0;
	for(int i = 1;i <= 10 ; i++){
		printf("Escriba el genero del alumno %i\n",i);
		scanf("%i",&sex[i]);
	}
	for (int i = 1;i <= 10 ; i++){
		printf("Escriba el semestre del alumno %i\n",i);
		scanf("%i",&sem[i]);
	}
		for (int i = 0;i <= 10 ; i++){
		printf("Escriba la calificación del alumno %i\n",i);
		scanf("%f",&prom[i]);
	}
	for(int i = 0;i < 10; i++){
		if(sex[i]==0){hom++;}else{mu++;}
	}
	printf("Son %i hombre y %i mujeres\n",hom ,mu);
		for(int i = 1 ; i <= 10 ; i++){
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
		for(int i = 0;i < 9; i++){printf("De semestre %i son %i \n",s,as[i]);s++;}
		for(int i = 0;i < 10;i++){fp =fp +prom[i];}
	fp=fp/10;
	printf("El promedio es de %f",fp);
}
