//ESSE É UM CÓDIGO DE ANOTAÇÕES MENTAIS E EXPERIMENTAÇÃO, NÃO RODAR
//ESSE É UM CÓDIGO DE ANOTAÇÕES MENTAIS E EXPERIMENTAÇÃO, NÃO RODAR
//ESSE É UM CÓDIGO DE ANOTAÇÕES MENTAIS E EXPERIMENTAÇÃO, NÃO RODAR

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int V[10];
    int N=10;
    srand(time(NULL));

    for(int i = 0; i < N; i++){
        V[i] = rand() % 10;
    }

    for(int i = 0; i < N; i++){
        printf("%i, ", V[i]);
    }

    printf("\n");
    int inicio = 0;
    int final = N-1;
    int meio;
    //usando i como elemento
    while (inicio <= final){
        meio = (inicio+final)/2;
        if(V[i] < V[meio]){
            final = meio-1;
        }
        else{
            if (V[i] > V[meio]){
                inicio = meio+1;
            }
            else {
                inicio = meio;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%i, ", V[i]);
    }
    return 0;
}
//ESSE É UM CÓDIGO DE ANOTAÇÕES MENTAIS E EXPERIMENTAÇÃO, NÃO RODAR
