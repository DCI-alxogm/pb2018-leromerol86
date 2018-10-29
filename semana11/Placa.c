#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int n, char arg []){
		int n = arg[1];
		int condicion = ( i == 0 || i == 4);
		int condicion2 = ( o == 0 || o == 4);
		double T[5][5],Br[4],x ,y;
		Br [0] = arg[2];
		Br [1] = arg[3];
		Br [2] = arg[4];
		Br [3] = arg[5];
		FILE *rep;
		rep = fopen("resultado.txt","w");
		for (int i = 0; i < 5; i++) {
			for (int o = 0; i < 5; i++) {
				if(condicion && condicion2){
				 if (i == 0){x = Br[0];}else{x = Br[2]}
 				 if (o == 0){y = Br[1];}else{y = Br[3]}
				 T[i][o]= (x+y)/2;
			 }else if (i == 0 && o < 4 && o > 0) {
				 T[i][o] = Br[3];
			 }else if (i == 4 && o < 4 && o > 0) {
				 T[i][o] = Br[1];
			 }else if (o == 0 && i < 4 && i > 0) {
				 T[i][o] = Br[0];
			 }else if (o == 4 && i < 4 && i > 0) {
				 T[i][o] = Br[2];
			 }else {
				 						
			 }
		}
	}
		fprintf(rep,"",);

}
