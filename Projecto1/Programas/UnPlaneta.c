
#include<stdio.h>
#include<math.h>
#include<string.h>
	int main(){
	FILE *arc,*re;
	char dir[255];
	//Se inicia el programa solicitando el nombre del archivo que guarda los datos.
	printf("Escribe el nombre del archivo(sin Extensión)");
	scanf("%s",dir);
	float Vx,Vy,Vz,M,m,t,h,r,x,y,z;
	int p;
	strcat(dir,".txt");//Concateno el nombre del archivo con el .txt
	arc=fopen(dir,"r");//Se abre el archivo para extraer los datos
	fscanf(arc,"%f %f %f %f %f %f %f %f %f %f",&M,&m,&t,&h,&x,&y,&z,&Vx,&Vy,&Vz);//Se almacenan los datos.
	fclose(arc);
	p = t/h;
	Vx*=365.242;//Debido a que los valores estan por dia se convierte las unidades de velolcidad a años
	Vy*=365.242;
	Vz*=365.242;
	re = fopen("respuesta.txt","w");//abrimos el archivo donde se guardaran los datos
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
