
#include<stdio.h>
#include<math.h>
#include<string.h>
	int main(){
	FILE *arc,*re;
	char dir[255];
	char Nombre[255];
	//Se inicia el programa solicitando el nombre del archivo que guarda los datos.
	int p,rt,c;
	printf("Escribe el nombre del archivo(sin Extensión)");
	scanf("%s",dir);
	printf("Cuantos planetas vas a calcular?");
	scanf("%i",&c);
	printf("Las velocidades de las velocidades estan en \n 1)UA/Años \n 2)UA/Dias\n");
	scanf("%i",&rt);//Se pregunta en que valor estan las velocidad para cnocer si se necesitan convertir
	float Vx,Vy,Vz,M,m,t,h,r,x,y,z;
	strcat(dir,".txt");//Concateno el nombre del archivo con el .txt
	arc=fopen(dir,"r");//Se abre el archivo para extraer los datos
			for (int i = 0; i < c; i++) {
							fscanf(arc,"%s %f %f %f %f %f %f %f %f %f %f",&Nombre,&M,&m,&t,&h,&x,&y,&z,&Vx,&Vy,&Vz);//Se almacenan los datos.
							p = t/h;
							if (rt==2) {
								Vx*=365.242;//Debido a que los valores estan por dia se convierte las unidades de velolcidad a años
								Vy*=365.242;
								Vz*=365.242;
							}
								re = fopen(Nombre,"w");//abrimos el archivo donde se guardaran los datos
						//Se realiza un ciclo para la impresión y calculo de los datos
							for (int u = 1 ; u <= p; u++){
							r = sqrt (pow(x,2) + pow(y,2) + pow(z,2));
								fprintf(re,"%f %f %f %f %f %f\n",x,y,z,Vx,Vy,Vz);//Se imprimen los primeros valores, que son los que se exrajeron del primer archivo
						//Desplazamiento de las coordenadas
								x+=(Vx*h);
								y+=(Vy*h);
								z+=(Vz*h);
						//Cambio de la velolcidad
								Vx-= h*((39.4784*M*x)/pow(r,3));
								Vy-= h*((39.4784*M*y)/pow(r,3));
								Vz-= h*((39.4784*M*z)/pow(r,3));
							}
							}
}
