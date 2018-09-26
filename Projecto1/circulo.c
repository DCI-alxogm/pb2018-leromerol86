#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
	int main(){
	FILE *arc,*re;
	char dir[255];
	printf("Escribe el nombre del archivo(sin Extensión)");
	scanf("%s",dir);
	float Vx,Vy,Vz,M,m,t,h,h2;	
	int x,y,z,p;
	strcat(dir,".txt");
	arc=fopen(dir,"r");
	fscanf(arc,"%f %f %f %f %i %i %i %f %f %f",&M,&m,&t,&h,&x,&y,&z,&Vx,&Vy,&Vz);
	p = t/h;
	h2 = h;
	int Xi[p],Yi[p],Zi[p];	
	float Vxi[p],Vyi[p],Vzi[p],GX,GY,GZ.r;
	re = fopen("respuesta.txt","w");
	for (int u = 0 ; u <= p; u++){
		Xi[u] = x + (Vx*h2);
		Yi[u] = y + (Vy*h2);
		Zi[u] = z + (Vz*h2);
		r =sqrt(pow(x,2)+pow(y,2)+pow(z,2)); 
		GX = (12.5664*M*x)/pow(r,3);
		GY = (12.5664*M*y)/pow(r,3);
		GZ = (12.5664*M*z)/pow(r,3);
		Vxi[u] = Vx - (GX);
		Vyi[u] = Vy - (GY);
		Vzi[u] = Vz - (GZ);		
		h2+=h;
		fprintf("%i %i",Xi[u],Yi[u]);
	}
	


}
