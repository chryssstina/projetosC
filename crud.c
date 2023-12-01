#include <stdio.h>
#define MAX 100


int main(){
    
    struct dataAbast{
        int dia, mes, ano;
    };
    struct dataAbast sData;

    struct dadosAbastecimento{
        int codigo;
        struct dataAbast data;
        char combustivel[12];
        char qualidade[12];
        float litros;
        float preco;
    };
    struct dadosAbastecimento abastecimento;
    struct dadosAbastecimento abastecimento_vetor[MAX];


    int cod=0;

    for (int x=0; x < MAX; x++){
            if (abastecimento[x].codigo > cod)
              cod = abastecimento[x].codigo;
    }

        
        

    for(x=0; x< MAX; x++){
        if(abastecimento[x].codigo == 0){

            cod = ultimo_codigo();
            abastecimento[x].codigo = cod + 1;

            printf("Digite o código \n");
            scanf("%d", &abastecimento[].codigo);

            printf("Digite a data de abastecimento \n");
            scanf("%d %d %d", &abastecimento.data.dia, &abastecimento.data.mes, &abastecimento.data.ano);


            printf("Digite o tipo de combustível (Gasolina/Alcool/Diesel)\n");
            fflush(stdin);
            fgets(abastecimento.combustivel, 12, stdin);

            printf("Digite a qualidade (Comum/Aditivada) \n");
            fflush(stdin);
            fgets(abastecimento.qualidade, 12, stdin);

            printf("Digite os litros \n");
            scanf("%f", &abastecimento.litros);

            printf("Digite o preço\n");
            scanf("%f", &abastecimento.preco);
        }
    }

    


    
    
}

