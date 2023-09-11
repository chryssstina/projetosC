#include <stdio.h>

int main() {

  int num1, num2, num3, opcao;

   printf("************ \n");
   printf("| Em Ordem |\n");
   printf("************ \n\n");

  printf("Digite três números diferentes. \n");
  scanf("%d %d %d", &num1,&num2,&num3);

  if(num1==num2 || num2==num3 || num3==num1){
    printf("\nOs números devem ser diferentes!\n");

  }else{

  printf("\nEscolha uma das opções a seguir: \n");
  printf("1. Mostre os números em ordem crescente; \n"); 
  printf("2. Mostre os números em ordem decrescente; \n");
  printf("3. Mostre o menor número entre os demais. \n");
  scanf("%d", &opcao);

    if(opcao == 1){
      printf("\nVocê escolheu a opção 1: ordem crescente. \n");

        if(num1<num2 && num2<num3){
          printf("%d - %d - %d", num1,num2,num3);
        }
        if(num1<num3 && num3<num2){
          printf("%d - %d - %d", num1,num3,num2);
        }
        if(num2<num1 && num1<num3){
          printf("%d - %d - %d", num2,num1,num3);
        }
        if(num2<num3 && num3<num1){
          printf("%d - %d - %d", num2,num3,num1);
        }
        if(num3<num1 && num1<num2){
          printf("%d - %d - %d",num3,num1,num2);
        }
        if(num3<num2 && num2<num1){
          printf("%d - %d - %d",num3,num2,num1);
        }
    }/*fim da opção 1*/

    if(opcao == 2){
      printf("\nVocê escolheu a opção 2: ordem decrescente. \n");
      
        if(num1<num2 && num2<num3){
          printf("%d - %d - %d", num3,num2,num1);
        }
        if(num1<num3 && num3<num2){
          printf("%d - %d - %d", num2,num3,num1);
        }
        if(num2<num1 && num1<num3){
          printf("%d - %d - %d", num3,num1,num2);
        }
        if(num2<num3 && num3<num1){
          printf("%d - %d - %d", num1,num3,num2);
        }
        if(num3<num1 && num1<num2){
          printf("%d - %d - %d",num2,num1,num3);
        }
        if(num3<num2 && num2<num1){
         printf("%d - %d - %d",num1,num2,num3);
        }
    }/*fim da opção 2*/

    if(opcao == 3){
      printf("\nVocê escolheu a opção 3: mostrar o menor no meio. \n");
      
        if(num1<num2 && num2<num3){
          printf("%d - %d - %d", num2,num1,num3);
        }
        if(num1<num3 && num3<num2){
          printf("%d - %d - %d", num3,num1,num2);
        }
        if(num2<num1 && num1<num3){
          printf("%d - %d - %d", num1,num2,num3);
        }
        if(num2<num3 && num3<num1){
          printf("%d - %d - %d", num3,num2,num1);
        }
        if(num3<num1 && num1<num2){
          printf("%d - %d - %d",num1,num3,num2);
        }
        if(num3<num2 && num2<num1){
          printf("%d - %d - %d",num2,num3,num1);
        }
                
    }/*fim da opção 3*/

}
  return 0;
} 