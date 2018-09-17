#include<stdio.h>
#include<math.h>
#include<string.h>
 int main(){
	FILE *arc,*res;
	int p,n;
	float min,max,r,h,k,s1,s2,g,vx;
	char dir[255];
	printf("Escribe el nombre del archivo(sin Extensión)");
	scanf("%s",dir);
	strcat(dir,".txt");
	arc=fopen(dir,"r");
	fscanf(arc,"%i %i %f %f %f",&p,&n,&min,&max,&k);			
	float x[n],fx[n],fi[n];
	r = max - min;
	h =r/k;	
	vx = min;
	for(int i = 0;i <= n;i++){
		fx[i] = pow(vx,p);
		s1 = pow(min,p)+pow(max,p);
		for(int o = 1;o < n; o++){
			g = min+(k*h);		
			s2+=pow(vx,g);		 		
		}		
		fi[i] = h*(s1+s2);	
	x[i] =min+h;	
	}
	res= fopen("respuesta.txt","w");
	fprintf(res,"|X | f(x)| I(x) \n");
		for(int j = 0;j < n ;j++){
			fprintf(res,"%f | %f | %f",x[j],fx[j],fi[j]);
		}
}
