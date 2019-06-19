#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
    int telefone;
}cad;




int main() {
  /*  int *vetor=NULL;
    int valor=0;
    int i=1;
    int quantidade=0;
    printf("digitar -1 para o programa parar!!\ndigite um valor:\n");
    scanf("%i", &valor);

    while(valor != -1){
        if(i == 1){
            vetor = (int*)malloc(i*sizeof(int));
            vetor[i] = valor;
        }else{
            vetor = (int *)realloc(vetor,i*sizeof(int));
            vetor[i] = valor;
        }


        printf("digite um valor:\n");
        scanf("%i", &valor);

     i++;

    }

    for(int x=0;x<i;x++){
        if(vetor[x] > 52){
            quantidade++;
        }
    }
    printf("elementos maiores de 52: %i", quantidade);




    char **nomes=NULL;
    int quantidade;
    int tamanho;
    printf("a quantidade de nomes a digitar e o tamanho dos nomes respectivamente:\n");
    scanf("%i", &quantidade);
    setbuf(stdin, NULL);
    scanf("%i", &tamanho);
    setbuf(stdin, NULL);

    nomes = (char **)malloc(quantidade*sizeof(char*));
    for(int i=0;i<quantidade;i++){
        nomes[i] = (char*)malloc(tamanho*sizeof(char));
    }

    for(int i=0;i<quantidade;i++){
        printf("digite o nome:\n");
        fgets(nomes[i], sizeof(nomes[i]),stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for(int i=0;i<quantidade;i++){
        printf("nome[%i]:%s\n",i+1, nomes[i]);
    }

    cad * cadastro=NULL;
    int quantidade;
    int opcao;
    int indice;

    printf("quantos cadastros deseja fazer?:\n");
    scanf("%i", &quantidade);

    cadastro = (cad*)malloc(quantidade* sizeof(cad));

    for(int i=0;i<quantidade;i++){
        printf("digite o nome desejado:\n");
        fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
        printf("digite a idade do malandro:\n");
        scanf("%i", &cadastro[i].idade);
        setbuf(stdin, NULL);
        printf("digite o telefone do cabloco:\n");
        scanf("%i", &cadastro[i].telefone);
        setbuf(stdin, NULL);
    }
    printf("deseja editar algum cadastro?\n 1-SIM\n2-NAO");
    scanf("%i", &opcao);
    while(opcao == 1){

        printf("digite o cadastro a ser removido:\n");
        scanf("%i", &indice);
        if(indice <= quantidade && indice >= 0) {
            printf("digite o nome do cadastro a ser editado:\n");
            fgets(cadastro[indice].nome, sizeof(cadastro[indice].nome), stdin);
            cadastro[indice].nome[strcspn(cadastro[indice].nome, "\n")] = '\0';
            printf("digite a idade a ser editada:\n");
            scanf("%i", &cadastro[indice].idade);
            setbuf(stdin, NULL);
            printf("digite o telefone a ser editado:\n");
            scanf("%i", &cadastro[indice].telefone);
            setbuf(stdin, NULL);
        }
        printf("deseja editar outro cadastro?\n 1-SIM\n2-NAO");
        scanf("%i", &opcao);

    }




*/


    return 0;
}
