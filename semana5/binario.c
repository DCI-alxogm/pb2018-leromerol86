#include <stdio.h>
#include <math.h>
 int main() {
   int t =0,re,rep,e,i,ca,ex,count=0;
  char numero [100];
   while (t == 0) {
     printf("Que quieres hacer?\n 1) Binario a Decimal \n 2)Decimal A Binario\n 3)Salir \n");
     scanf("%i",&re );
      switch (re) {
        case 1:
        printf("Inserte la cantidad de dígitos \n" );
        scanf("%i",&ca);
        printf("Inserte el numero \n");
        scanf("%s",&numero );
        for ( i = 0; i <= ca; i++) {
        e = ca - i;
          if (numero [e] == '1') {
          ex =  pow(2, e );
                rep = rep + ex;
          }
        }
        printf("%i \n",rep);

        break;
        case 2:
        printf("Inserta los decimales\n");
       scanf("%i", &ca);
        while(ca>0)
      	     {
      	       if(ca%2==1) { numero[count++]='1';}
      	       else {numero[count++]='0';}
      		ca/=2;}
      	for(int i = count; i > 0; i--) {  printf("%c", numero[i-1]);}
        printf("\n");
               break;
        case 3:
        t = 1;
        break;

      }
   }
}
