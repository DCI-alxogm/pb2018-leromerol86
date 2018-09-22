#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
 int main(){
	FILE *arc,*res;
	int p,n;
	float min,max,r,h,k,s1,s2,g,vx,h1;
	char dir[255];
	printf("Escribe el nombre del archivo(sin Extensión)");
	scanf("%s",dir);
	strcat(dir,".txt");
	arc=fopen(dir,"r");
	fscanf(arc,"%i %i %f %f %f",&p,&n,&min,&max,&k);
if (p<1) {
  printf("Exponente no valido.DEbe ser mayor a o igual a 1\n" );
  exit(-1);
}
  float x,fx,fi;
	r = max - min;
	h =r/k;
	vx = min;
  res= fopen("respuesta.txt","w");
  fprintf(res,"| X | f(x)| I(x) \n");

        for(int i = 0;i <= k;i++){
                s2 =0;
                s1 = 0;
            		fx = pow(vx,p);
                h1 =(max-min)/n;
                s1 = (pow(min,p) + pow(max,p))/2;
                  for(int o = 1;o < n; o++){
                          g = min + (o*h1);
                          s2+=pow(g,p);
                  }
                  fi= h1*(s1+s2);
			fprintf(res," %f | %f | %f \n",vx,fx,fi);
                vx+=h;
    }
}
