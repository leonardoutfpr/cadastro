#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char rua[90];
    int numero;
}endereco;



typedef struct item{
    char nome[21];
    int idade;
    endereco end;

}itemcad;

typedef struct nolista *Ponteiro;

typedef struct nolista{
    itemcad cad;
    Ponteiro proximo;
}nolista;

typedef struct {
    Ponteiro inicio;
    int contador;
}lista;

void inicia_lista(lista *lista){
    lista->inicio=NULL;
    lista->contador=0;
}
void inserir(lista *LISTA){
    Ponteiro aux;
    Ponteiro CORRE;

    if(LISTA->inicio == NULL){
        LISTA->inicio->proximo=NULL;
        LISTA=(lista*)malloc(sizeof(lista));
        printf("digite um nome para o cadastro:\n");
        fgets(LISTA->inicio->cad.nome, sizeof(LISTA->inicio->cad.nome),stdin);
        LISTA->inicio->cad.nome[strcspn(LISTA->inicio->cad.nome,"\n")]= '\0';
        printf("digite a idade do caboco:\n");
        scanf("%i", &LISTA->inicio->cad.idade);
        printf("digite o numero  do caboco:\n");
        scanf("%i", &LISTA->inicio->cad.end.numero);
        printf("digite o nome da rua:\n");
        fgets(LISTA->inicio->cad.end.rua, sizeof(LISTA->inicio->cad.end.rua),stdin);
        LISTA->inicio->cad.end.rua[strcspn(LISTA->inicio->cad.end.rua,"\n")]='\0';
        LISTA->contador++;
    }else{
        aux=(Ponteiro)malloc(sizeof(lista));
        CORRE=LISTA->inicio;
        while(CORRE!=NULL){
            CORRE=CORRE->proximo;

        }
        aux->proximo=CORRE->proximo;
        CORRE=aux;
        printf("digite um nome para o cadastro:\n");
        fgets(CORRE->cad.nome, sizeof(CORRE->cad.nome),stdin);
        CORRE->cad.nome[strcspn(CORRE->cad.nome,"\n")]= '\0';
        printf("digite a idade do caboco:\n");
        scanf("%i", &CORRE->cad.idade);
        printf("digite o numero  do caboco:\n");
        scanf("%i", &CORRE->cad.end.numero);
        printf("digite o nome da rua:\n");
        fgets(CORRE->cad.end.rua, sizeof(CORRE->cad.end.rua),stdin);
        CORRE->cad.end.rua[strcspn(CORRE->cad.end.rua,"\n")]='\0';
        LISTA->contador++;

    }

}

void remover(lista *LISTA, int indice){
    Ponteiro CORRE;
    Ponteiro aux;
    int i=1;

    if(LISTA->inicio == NULL){
        printf("esta vazia;");
    }else{
        if(LISTA->contador < indice){
            printf("esse indice nao esta alocado");

        }else{

            for(CORRE=LISTA->inicio;i<indice;CORRE=CORRE->proximo){
                aux=CORRE->proximo;
                CORRE->proximo=CORRE->proximo->proximo;
                i++;
            }

            LISTA->contador--;
            free(aux);
        }
    }
}





int main() {
    int opcao;
    lista *cadastro = NULL;
    Ponteiro aux;
    int contador;

    printf("Opcao 1 cadastro\n Opcao 2 remover cadastro\n Opcao 3 listar cadastros\n Opcao 4 fechar o programa");

    printf("digite a opcao:\n");
    scanf("%i", &opcao);
    inicia_lista(cadastro);



    switch (opcao) {
        case 1:
            inserir(cadastro);


            break;

        case 2:
            printf("digite um indice para remover:");
            remover(cadastro,contador);
        break;
        default:
            printf("ead");
    }




    return 0;

}