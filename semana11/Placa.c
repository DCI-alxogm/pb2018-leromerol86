#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int n, char arg []){
		int n = arg[1];
		double T[4],V1=arg[2],V2=arg[3],V3=arg[4],V4=arg[5];
		FILE *rep;
		rep = fopen("resultado.txt","w");
		T[0] = (V1+V2)/2;
		T[1] = (V1+V4)/2;
		T[2] = (V3+V4)/2;
		T[3] = (V3+V2)/2;
		fprintf(rep,"",);
		
}
