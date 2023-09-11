#include <stdio.h>

int main() {
  int idade, i, cont=0;
  float somaI=0;
  float peso, altura, mediaIdade, porcent;
  float cont2=0,cont3=0;


   printf("************************* \n");
   printf("| Idade - Peso - Altura |\n");
   printf("************************* \n\n");

  for(i=1; i<=10; i++){
      printf("-> Pessoa %d \n",i);
      
      printf("Digite a idade: \n");
      scanf("%d" ,&idade);
      printf("Digite o peso: \n");
      scanf("%f" ,&peso);
      printf("Digite a altura: \n");
      scanf("%f" ,&altura);
      printf("\n\n");
    
    
      somaI = somaI + idade;
      mediaIdade = somaI/10;

      if(peso>80 && altura<1.50){
        cont++;  /*quant de pessoas*/
      }

       
       if(altura>1.90){
         cont3++;
         if(idade>=10 && idade<=30){
           cont2++;
         }
        porcent = cont2/cont3*100;
      }
  
  }/*fim do for*/
    printf("-> A média das idades é: %.2f \n" ,mediaIdade);
    printf("-> Há %d pessoa(s) com mais de 80kg e com altura inferior a 1.50m.\n",cont);
    printf("-> Das pessoas que tem mais de 1.90m, %.1f por cento estão na faixa 10-30 anos.\n",porcent);
  
  return 0;
}