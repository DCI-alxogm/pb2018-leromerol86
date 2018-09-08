#include<stdio.h>
 int main() {
	   int in,fn,divi,pri;
    printf("Inserte el interbalo (primero un numero y luego el otro) \n");
	  scanf("%i %i",&in ,&fn );
    for (int o = 0; o < fn; o++) {
      divi=0;
        for (int i = 1; i <= in; i++) {
          if (in%i==0) {
            divi++;
          }
        }
        if ( pri== 20) {
              if (divi <= 2) {
                printf("%i \n",in);
                pri++;
              }
            }else{
          if (divi <= 2) {
                printf("%i ",in);
                pri++;
        }
      }
        in++;
    }
    printf("\n");  
  }
