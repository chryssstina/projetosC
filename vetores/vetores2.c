#include <stdio.h>


// soma os números do vetor
float soma(int v[]){
        int i, somaV=0;

        for(i=0; i<6; i++){
                somaV = somaV + v[i];
        }
        return somaV;
}

// calcula a média dos números do vetor
float media(int v[]){
  
        float mediaV;
        mediaV = soma(v)/6;
        return mediaV;
}
 
// mostra os números pares do vetor
int pares(int v[]){
        int par[6], i, pares=0;

        for(i=0; i<6; i++){
                if(v[i]%2 == 0){
                    par[pares] = v[i];   
                    pares++; 
                  //verifica se o número é par e o atribui ao vetor par[]
                  //'pares' funciona como o índice so vetor par[]
                } 
        }
  
        printf("Pares do vetor: ["); 
        for (i=0; i< pares; i++){
              if(i<pares-1){
                   printf("%d,",par[i]);
              }else{
                   printf("%d] \n",par[i]);
              }
         
        }
}

//exibe os números digitados em um vetor
int entrada(int v[]){
        int i;
  
        printf("\nVetor de entrada = [");
        for(i=0; i<6; i++){
             if(i<5){
                    printf("%d,",v[i]);
              }else{
                    printf("%d] \n",v[i]);
                  }
       }
}


//exibe os números digitados em um novo vetor, mas na ordem inversa
int entrada_inversa(int v[]){
        int i;

        printf("Vetor inverso = [");
        for(i=5; i>=0; i--){
           if(i>0){
                  printf("%d,",v[i]);
            }else{
                  printf("%d] \n",v[i]);
                }
       }
}

// função pricipal - recebe o vetor
void main(){
  
        int v[6];
        int i;
        char continuar = '\0';
  
  while (continuar != 'n' && continuar != 'N'){
        printf("Digite seis números: \n");
        for (i=0; i<6; i++){
                printf("Nº %d de 6: ", i+1);
                scanf("%d",&v[i]);
        }
  
        printf(entrada(v));
        printf(entrada_inversa(v));
        printf("Soma dos elementos do vetor = %.1f \n", soma(v));
        printf("Média dos elementos do vetor = %.2f \n", media(v));
        printf(pares(v));
     
  printf("\nDeseja continuar? (s/n)\n");
  scanf(" %c", &continuar);
    if(continuar == 'n' || continuar == 'N'){
      printf("Programa encerrado!");
    }
  }
}