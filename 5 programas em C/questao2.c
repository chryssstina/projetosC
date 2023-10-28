#include <stdio.h>

int main(void) {

  float numHora,hora, min;
  int minTotal, segTotal;

   printf("***************************** \n");
   printf("| Horas, Minutos e Segundos |\n");
   printf("***************************** \n\n");
  
  printf("-> Digite um número para as horas.\n Ex.: 13.24 (13 horas e 24 minutos)\n \n");
  printf("Sua hora:\n");
  scanf("%f", &numHora);
  printf("\n");
  
  hora = (int)numHora; /*parte inteira do número digitado*/
  min = (numHora - (int)numHora) * 100; /*parte decimal do número digitado*/

  if((hora>23 || hora<0) || (min>59 || min<0)){
      printf("A parte inteira representa a hora. Assim ela só pode ir de 0 a 23.\n");
      printf("A parte decimal representa os minutos. Assim ela só pode ir de 0 a 59.\n");
  }else{
      minTotal = hora*60 + min;
      segTotal = minTotal*60;
      printf("A hora que você digitou equivale a %d minutos ou %d segundos." ,minTotal,segTotal);
  }

  
  return 0;
}
