#include <stdio.h>
#include <stdbool.h>
#define MAX 50 
//define o tamanho máximo do vetor como 50

// função para calcular os elementos válidos (até o usuário digitar 0)
int tamanho(int numeros[]) {
   int i, cont = 0;
   int *pont; 
   pont = numeros;
  
  for (i = 0; i < MAX; i++) {
    if (*pont > 0) {
      cont++;
      pont++;
    } else {
      break;
    }
  }
  return cont;
}






// função para calcular a soma dos elementos do vetor
float soma(int numeros[]) {
  int i;
  int soma = 0; 
  
 //criando um ponteiro para numeros[]
  int *pont; 
  pont = numeros; 
  
  for (i = 0; i < tamanho(numeros) + 1; i++) {
    soma = soma +  *pont;
    pont ++;
  }
 //o ponteiro é incrementado para passar para o endereço ďe 
 //memória do próximo elemento do vetor
  return soma;
}







// função para calcular a média
float media(int numeros[]) {

  float media = 0;

  // retornando as duas funções
  media = soma(numeros) / tamanho(numeros);
  return media;
}








//função para retirar elementos repetidos
void nao_repetidos(int numeros[], int aux[]) {
    int x,y,z=0; 
    bool repete; //valor booleano
    
    for(x=0; x< tamanho(numeros)+1; x++){
        repete = false;
        for(y=x+1; y<tamanho(numeros)+1; y++){
            if(numeros[x]==numeros[y]){
               repete = true;
               break;
            }
        }
      
        if(!repete){
            aux[z] = numeros[x];
            z++;
        }   
    }

    printf("\nVetor sem elementos repetidos: [");
    for(x=0; x<z; x++){
      if(x<z-1){
        printf("%d,",aux[x]);
      }else{
        printf("%d] \n",aux[x]);
      }
    }
}







//função principal
void main(){

  int i;
  int numeros[MAX];
  int aux[MAX];

  printf("Digite uma quantidade n de números para armazenar no vetor!\n\n");
  printf("NOTA: - A quantidade máxima é 50;\n");
  printf("      - Para encerrar digite zero.\n\n");

  printf("Digite seus números armazenar no vetor: \n\n");
  for (i=0; i<tamanho(numeros)+1; i++){
    printf("Nº %d: ", i+1);
    scanf("%d",&numeros[i]);
  }

  nao_repetidos(numeros, aux);
  printf("Soma dos números do vetor = %.2f \n", soma(numeros)); 
  printf("Quantidade de elementos válidos = %d \n", tamanho(numeros)); 
  printf("Média dos números = %.2f \n", media(numeros)); 

}



