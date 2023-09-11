#include <stdio.h>

/*O programa não calcula corretamente o fatorial de números maiores se o tipo foi INT*/

int main() {
  double numUser,i, num;
  int sair;

  printf("************ \n");
  printf("| Fatorial |\n");
  printf("************ \n\n");

  printf("* Objetivo:\n  Calcular o fatorial de um número até que o usuário digite zero (programa encerra). \n");
  printf("* Nota:\n  O limite é 170. \n\n");

      
    while(sair==1){
       printf("Digite um número. \n");
       scanf("%lf" ,&numUser);
    
       num = numUser; /*a variável num serve para guardar o valor digitado pelo usuário a fim de ser exibido depois, já que numUser tem seu valor alterado a cada interação*/
      
          if(numUser!=0){   
                for (i = 1; numUser >= 1; numUser--){
                  i = i*numUser;
                }
                printf("O fatorial de %.0lf é %.0lf. \n\n" ,num,i);
          }else{
            break; /*encerra quando for digitado zero*/
          }/*fim do if*/ 
    }/*fim do while*/
  
  sair=1;
  return 0;
  
}