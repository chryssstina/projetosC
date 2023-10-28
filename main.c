#include <stdio.h>


float soma(int v[]){
        int i, somaV=0;

        for(i=0; i<6; i++){
                somaV = somaV + v[i];
        }

        return somaV;
}


float media(int v[]){
        float mediaV;

        mediaV = soma(v)/6;

        return mediaV;
}
 
// mudar para VOID, imprimir a função normal na main, criar novo loop par[pares]
int pares(int v[]){
        int par[6], i, pares=0;

        for(i=0; i<6;i++){
                if(v[i]%2 == 0)
                      
        }

}


void main(){
        int v[6];
        int i;

        printf("Digite seis números: \n");

        for (i=0; i<6; i++){
                printf("Nº %d: ", i+1);
                scanf("%d",&v[i]);
        }

        printf("Soma dos elementos do vetor = %f \n", soma(v));
        printf("Média dos elementos do vetor = %f \n ", media(v));
        printf("Pares do vetor = %d \n ", pares(v));
  }