#include <stdio.h>

int main(){
    //Conceitos:
    //Fila: FIFO (First in, First Out)
    //Pilha: LIFO (Last In, First Out)

    struct aluno{
        int matricula;
        char nome[30];
        float n1, n2, n3;
    };

    struct lista{
        int quant;
        struct aluno dados[100]
    };

    //LISTA ESTÁTICA:
    Lista *li;
    li = (Lista*)malloc(sizeof(struct lista));
    if (li != NULL){
        li->quant =0; // ponteiro numa estrutura, usar a seta é mais legível e consistente, equivalente ao ponto
    }
    return li;



    return 0;
}
