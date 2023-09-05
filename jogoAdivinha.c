#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*nome: Maria Chrystina Lima Silva */
/*Bacharelado em Ciência da Computação*/
/*Disciplina de Programação Estruturada - prof.: Eleudson*/

int main(){
    int numero_grande, segundos, numero;
    int numChute; /*chute do usuário*/
    int tent = 1;  /*total de tentativas*/
    char ch;
    int sair = 0;
    int pontos = 1000;


    /*Gera um número aleatório entre 0 e 99 a cada nova rodada*/
    segundos = time(0);
    srand(segundos);
    numero_grande = rand();
    numero = numero_grande % 100; 



    printf("=========================================== \n");
    printf("|           Jogo de Adivinhação           | \n");
    printf("|-----------------------------------------| \n");
    printf("|              Como funciona?             | \n| Você deve chutar um número de 0 até 99. |\n| Você tem 10 tentativas e a cada erro    |\n| haverá um desconto na sua pontuação.    |\n");
    printf("===========================================\n \n");


    while(sair == 0){
      printf("Pontuação Inicial: 1000 pontos. \n\n");
        while(tent <= 10){
            printf("Essa é a sua tentativa %d/10. \n", tent);
            printf("Chute um número! \n");
            scanf("%d", &numChute);

            if(numChute < 0){
              printf("Números negativos não são aceitos. \nChute novamente! \n \n");
              tent = tent; /*preserva a tentativa*/
              continue;
            }


            if(numChute == numero){
                 printf("=========================================== \n");
                 printf("|       Parabéns! Você acertou!           | \n");
                 printf("| A sua pontuação final é de %d pontos!  |  \n",pontos);
                 printf("=========================================== \n");
                 break; /*Interrompe o jogo se o usuário acertar*/
            }else{
                  printf("Você errou. \n");
               
                      if(numChute > numero){
                            printf("Digite um número menor!\n");
                        }else{
                            printf("Digite um número maior!\n");
                          }
              
                  tent = tent + 1; /*Incremento do while das tentativas*/
              
                  pontos = pontos - (abs(numero - numChute)/2);
              
                  if(numChute - 1 == numero || numChute + 1 == numero){
                         pontos = pontos - 1; /*para quando a diferença entre o numChute e numero aleatório for apenas 1*/}
                 
                 printf("Sua pontuação: %d \n\n",pontos);
              
          } /*fim do if - else*/

        } /*Fim do while e das tentativas*/

        printf("Fim de jogo. \n");
        printf("Deseja jogar novamente? (s/n)\n");


        setbuf(stdin, NULL); /*Limpa o buffer do teclado*/
        ch = getchar(); /*Pega o caractere digitado pelo usuário*/

        if(ch == 's' || ch== 'S'){
              printf("\n\n***************************\n\n");
              sair = 0; /*roda o jogo novamente (primeiro while) se o usuário quiser jogar novamente */ 
        }else{
            sair = 1; /*Fim do jogo*/
            printf("======================= \n");
            printf("|    Jogo encerrado   | \n");
            printf("======================= \n \n");
            }

        tent = 1;

        segundos = time(0);
        srand(segundos);
        numero_grande = rand();
        numero = numero_grande % 100;
  } /*Fim do while de sair (continuar ou nao)*/

        return 0;
}