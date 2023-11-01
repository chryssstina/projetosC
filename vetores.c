#include <stdio.h>

//finalizar

//função para calcular a soma dos elementos do vetor
float soma(int numeros[]) {

  int i; 
  int aux; //variavel auxiliar para armazenar a soma
  int *soma = &aux; //o ponteiro *soma armazena o endereço da variável auxiliar
  *soma = 0; //atribuindo 0 ao endereço apontado por soma, ou seja, variável auxiliar


  for (i = 0; i < 10; i++){
      *soma = *soma + numeros[i]; //Colocando a soma dentro do endereco onde soma aponta
  }

  return *soma;
} 




//função para calcular os elementos válidos
int tamanho(int numeros[]) {
  
}

// função para retornar a média dos valores do vetor
float media(int numeros[]) {
int i;
  float aux; //variavel auxiliar para armazenar a média
  float *media = &aux; //o ponteiro *média armazena o endereço da variável auxiliar
  *media = 0; //atribuindo 0 ao endereço apontado por média

*media = soma(numeros)/10;
  //media = retorno da função soma dividido pelo tamanho do vetor
  return *media;
}






//função para retirar elementos repetidos
void nao_repetidos(int numeros[]) {
  
}

  
//função principal
void main(){

  int i; //indice do vetor
  int numeros[10];

  printf("Digite um número para armazenar no vetor: \n");
  for (i=0; i<10; i++){
    //o índice do elemento no vetor é i-1 já que começa em zero
    printf("Nº %d: ", i+1);
    scanf("%d",&numeros[i]);
  }

  nao_repetidos(numeros);
  printf("Soma dos números do vetor = %.2f \n", soma(numeros)); 
  printf("Números de elementos = %d \n", tamanho(numeros)); 
  printf("Média dos números = %.2f \n", media(numeros)); 

}



