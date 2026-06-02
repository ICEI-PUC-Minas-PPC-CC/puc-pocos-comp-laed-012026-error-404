/*Entrega 1
PROJETO: CONSERTO DE ELETRONICOS.
ALUNOS: Mariana Piva, Camilly Carvalho, Gabriel Carvalho e Wesley Nogueira. */


#include<stdio.h>

struct cadastro{
    int numeroficha;
    char nome[50];
    char telefone[15];
    char equipamento[30];
    char defeito[100];
};

struct cadastro cadastro[15];
    int quantidade = 0;

int main() {
    int clique, ficha;
    int i = 0;

        do{
            printf("\n------- MENU ------- \n\n");
            printf("Clique 1 para CADASTRAR\n");
            printf("Clique 2 para LISTAR\n");
            printf("Clique 0 para ENCERRAR\n\n");
            printf("Clique: ");
                scanf("%d", &clique);

                switch(clique){
                    case 1:
                        cadastro[quantidade].numeroficha = quantidade + 1;
                        printf("\nNumero da ficha: %d\n",cadastro[quantidade].numeroficha);

                        printf("Digite o nome: ");
                        scanf("%s", cadastro[quantidade].nome);

                        printf("Digite o telefone: ");
                        scanf("%s", cadastro[quantidade].telefone);

                        printf("Digite o equipamento: ");
                        scanf("%s", cadastro[quantidade].equipamento);

                        printf("Digite o defeito: ");
                        scanf("%s", cadastro[quantidade].defeito);

                        quantidade++;
                        break;

                    case 2:
                        printf("Digite a ficha: ");
                        scanf("%d", &ficha);

                            if(ficha >= 1 && ficha <= quantidade){
                                printf("\n--- DADOS DA FICHA %d ---\n", ficha);
                                printf("Nome: %s\n", cadastro[ficha-1].nome);
                                printf("telefone: %s\n", cadastro[ficha-1].telefone);
                                printf("Equipamento: %s\n", cadastro[ficha-1].equipamento);
                                printf("Defeito: %s\n", cadastro[ficha-1].defeito);
                                }
                            else{
                                printf("Ficha nao encontrada!\n");
                            }
                        break;

                    case 0:
                        break;

                    default:
                        printf("Opcao inexistente, digite novamente...\n\n");

                }


}while(clique != 0);

}

