#include <stdio.h>
#include<math.h>
//fUNCION CON ENTRADA Y SALIDA
int BiDe(int ca, char numero [255]) {
int rep,e,ex;
for (int  i = 0; i <= ca; i++) {
  e = ca - i;
    if (numero [e] == '1') {
    ex =  pow(2, e );
          rep = rep + ex;
    }
  }
return rep;
  }
//fUNCION SIN ENTRADA Y SALIDA
void DeBi() {
  int ca,count;
  char numero[255];
  printf("Inserta los decimales\n");
  scanf("%i", &ca);
  while(ca>0)
       {
         if(ca%2==1) { numero[count++]='1';}
         else {numero[count++]='0';}
    ca/=2;}
  for(int i = count; i > 0; i--) {  printf("%c", numero[i-1]);}
  printf("\n");
}
//fUNCION SIN ENTRADA Y CON SALIDA
int Fin() {
  char op;
  int tmp;
  printf("¿Quieres Hacer otra acción? S/N\n");
  scanf("%s", &op);
  if(op == 'S'){tmp++;}else{tmp = 0;}
  return tmp;
}
//FUNCION CON ENTRADA Y SIN SALIDA
void name(int v) {
printf("Gracias por usar %i veces el programa\n", v);
}
int main(int argc, char const *argv[]) {
int r,re,v;
int ca;
char numero [255];
printf("Que quieres hacer?\n 1) Binario a Decimal \n 2)Decimal A Binario\n 3)Salir \n");
scanf("%i",&re);
while (re > 0) {
  switch (re) {
    case 1:
      printf("Inserte la cantidad de dígitos \n" );
      scanf("%i",&ca);
      printf("Inserte el numero \n");
      scanf("%s",&numero );
      printf("%i \n",BiDe(ca,numero));
      re=Fin();
    break;
    case 2:
    DeBi();
    re=Fin();
    break;
    case 3:
    name(v);
    re = Fin();
    break;
    }
    v++;
  }
}
