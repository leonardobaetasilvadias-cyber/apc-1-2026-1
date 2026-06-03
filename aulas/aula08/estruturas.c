#include <stdio.h>
int main(){

    // tipo personalizado
    struct contato_t {
        char nome[61];
        long int telefone;
    };

    struct ponto_t {
        int x;
        int y;
    };

    struct aluno_t {
        int matricula;
        char nome[61];
        char email[61];
        long int telefone;
    };

    struct contato_t contato;
    printf("Preencha com os dados do contato: \n");
    printf("Nome: ");
    scanf("%[^\n]s", contato.nome);
    while(getchar() != '\n');
    printf("Telefone: ");
    scanf("%li", &contato.telefone);
    while(getchar() != '\n');

    printf("Seu contato: %s - %li\n", contato.nome, contato.telefone);

    struct contato_t contatos[3];
    for(int i = 0; i < 3; i++){
        printf("Contato %i\n", i+1);
        printf("Nome: ");
        scanf("%[^\n]s", contatos[i].nome);
        while(getchar() != '\n');
        printf("Telefone: ");
        scanf("%li", &contatos[i].telefone);
        while(getchar() != '\n');
    }
    printf("\n");
    printf("Sua agenda de contatos\n");
        for(int i = 0; i < 3; i++){
            printf("%s - %li\n", contatos[i].nome, contatos[i].telefone);
        }

    printf("\n");
    // buscar contato
    int procurado = 0;
    int achei = -1;
    printf("Entre com o numero do contato: ");
    scanf("%i", &procurado);
    for(int i = 0; i < 3; i++) {
        if (procurado == i) {
            achei = i;
            break;
        }
    }

    if (achei < 0) {
        printf("O contato %i nao foi encontrado\n");
    } else {
        printf("Achei o contato %s - %li\n", contatos[achei].nome, contatos[achei].telefone);
    }

    return 0;
}