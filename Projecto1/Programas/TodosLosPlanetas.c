
#include<stdio.h>
#include<math.h>
#include<string.h>
	int main(){
	FILE *arc,*re;
	char dir[255];
	int c,p[9];
	printf("Cuantos planetas vas a calcular?");
	scanf("%i",&c);
	printf("Escribe el nombre del archivo(sin Extensión)");
	scanf("%s",dir);
	double Vx[9],Vy[9],Vz[9],M[9],m[9],t[9],h[9],r[9],x[9],y[9],z[9];
	strcat(dir,".txt");
	arc=fopen(dir,"r");
		for (int i = 0; i <= c; i++) {
				fscanf(arc,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&M[i],&m[i],&t[i],&h[i],&x[i],&y[i],&z[i],&Vx[i],&Vy[i],&Vz[i]);
				p[i] = t[i]/h[i];
				Vx[i]*=365.242;//Decido a que los valores estan por dia se convierte las unidades de velolcidad a años
				Vy[i]*=365.242;
				Vz[i]*=365.242;
						switch (i) {
										case 0:
										re = fopen("uno.txt","w");
										break;
										case 1:
										re = fopen("dos.txt","w");
										break;
										case 2:
										re = fopen("tres.txt","w");
										break;
										case 3:
										re = fopen("cuatro.txt","w");
										break;
										case 4:
										re = fopen("cinco.txt","w");
										break;
										case 5:
										re = fopen("seis.txt","w");
										break;
										case 6:
										re = fopen("siete.txt","w");
										break;
										case 7:
										re = fopen("ocho.txt","w");
										break;
										case 8:
										re = fopen("nueve.txt","w");
										break;
				}
					r[i] = sqrt (pow(x[i],2) + pow(y[i],2) + pow(z[i],2));
										for (int u = 1 ; u <= p[i]; u++){
													fprintf(re,"%lf %lf %lf %lf %lf %lf\n",x[i],y[i],z[i],Vx[i],Vy[i],Vz[i]);
													x[i]+=(Vx[i]*h[i]);
													y[i]+=(Vy[i]*h[i]);
													z[i]+=(Vz[i]*h[i]);
													Vx[i]-= h[i]*((39.4784*M[i]*x[i])/pow(r[i],3));
													Vy[i]-= h[i]*((39.4784*M[i]*y[i])/pow(r[i],3));
													Vz[i]-= h[i]*((39.4784*M[i]*z[i])/pow(r[i],3));
											}
					fclose(re);
				}
}
