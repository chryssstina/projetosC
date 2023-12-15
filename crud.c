#include <stdio.h>
#define MAX 100


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

//----------Funções----------
void adicionarAbastecimento(void);
void consultarAbastecimento();
void editarAbastecimento();
void excluirAbastecimento();
void listarAbastecimento();
int ultimo_codigo(void);

//---------------------------

int main(){
    int opcao;

    printf("Escolha uma opção; \n");
    printf("1. Adicionar abastecimento");
    printf("2. Consultar abastecimento");
    printf("3. Editar abastecimento");
    printf("4. Excluir abastecimento");
    printf("5. Listar abastecimento");
    printf("0. Sair");
    
    scanf("%d",&opcao);

    while (opcao != 0){ 
            if(opcao=1){
                adicionarAbastecimento();
            }
            if(opcao=2){
                consultarAbastecimento();
            }
            if(opcao=3){
                editarAbastecimento();
            }
            if(opcao=4){
                excluirAbastecimento();
            }
            if(opcao=5){
                listarAbastecimento();
            }
    } //fim do while
} //fim da função main



int ultimo_codigo(void){
    int cod=0;

    for (int x=0; x < MAX; x++)
        if (abastecimento_vetor[x].codigo > cod)
            cod = abastecimento_vetor[x].codigo;

    return cod;
}

//1. Adicionar abastecimento
void adicionarAbastecimento(){

    int x,cod;

    for(x=0; x< MAX; x++){
        if(abastecimento_vetor[x].codigo == 0){

            cod = ultimo_codigo();
            abastecimento_vetor[x].codigo = cod + 1;

            //printf("Digite o código \n");
            //scanf("%d", &abastecimento_vetor[x].codigo);

            printf("Digite a data de abastecimento \n");
            scanf("%d %d %d", &abastecimento_vetor[x].data.dia, &abastecimento_vetor[x].data.mes, &abastecimento_vetor[x].data.ano);

            printf("Digite o tipo de combustível (Gasolina/Alcool/Diesel)\n");
            fflush(stdin);
            fgets(abastecimento_vetor[x].combustivel, 12, stdin);

            printf("Digite a qualidade (Comum/Aditivada) \n");
            fflush(stdin);
            fgets(abastecimento_vetor[x].qualidade, 12, stdin);

            printf("Digite os litros \n");
            scanf("%f", &abastecimento_vetor[x].litros);

            printf("Digite o preço\n");
            scanf("%f", &abastecimento_vetor[x].preco);

            break;
        }
    } 
}

