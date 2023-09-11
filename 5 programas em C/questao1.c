#include <stdio.h>
#include <math.h>


int main() {

  int numUser;
  float numQuad, numCubo, raizQ, raizC, resto;

   printf("************* \n");
   printf("| Operações |\n");
   printf("************* \n\n");

  
    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &numUser);
  
    if(numUser > 0){
        numQuad = pow(numUser, 2); /*pow(base,expoente)*/
        numCubo = pow(numUser, 3);
        raizQ = sqrt(numUser);
        raizC = cbrt(numUser);
        resto = numUser%3;
     
    
            /*%.2f arredonda para duas casas decimais*/
            printf("\nO quadrado do número:\n");
            printf("%d² = %.2f \n\n" ,numUser,numQuad);

            printf("O cubo do número:\n");
            printf("%d³ = %.2f \n\n" ,numUser,numCubo);

            printf("A raíz quadrada do número:\n");
            printf("²√%d = %.2f \n\n" ,numUser,raizQ);

            printf("A raíz cúbica do número: \n");
            printf("³√%d = %.2f \n\n" ,numUser,raizC);
      
            printf("O resto da divisão do número por 3: \n");
            printf("R = %.2f \n" ,resto);

  
    }else{
      printf("O número deve ser positivo.");
    }
  
  
  return 0;
}