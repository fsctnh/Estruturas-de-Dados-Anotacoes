#include <stdio.h>

struct elemento{
        int valor;
        struct elemento *prox;

};

typedef struct elemento Elem;
typedef struct elemento *Lista;

    Lista* criador_listas(){
        Lista* li = (Lista*) malloc(sizeof(Lista));
        if(li != NULL){
            *li = NULL;
        }
        return li;
}
//o que isso faZ: cria o ponteiro LI, que é basicamente um item que aponta pro que vai ser o primeiro número da lista.
//começa apontando pra null

int insere_ini(Lista* li, valor){
    if(li == NULL){
        return 0;
    }
    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));
    if (no == NULL){
        return 0;
    }
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}




int main(){


    return 0;
}
