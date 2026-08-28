#include <stdio.h>

int buscaBinaria(int *V, int N, int elem){
    int i, inicio, meio, fim;
    inicio = 0;
    fim = N-1;
    while (inicio <= fim){
        meio = (inicio+fim) / 2;
        if (elem < V[meio])
            fim = meio-1;
        else
            if (elem > V[meio])
                inicio = meio+1;
            else
                return meio;
    }
    return -1;
}

int main(){

    int target = 16; // numero que queremos encontrar a posição
    int size = 10;
    int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int res = buscaBinaria(array, size, target); //nome da array a ser buscada, tamanho da array, numero que queremos achar
    if (res != -1){
        printf("o numero buscado esta no array[%i].", res);
        return 0;
    }
    else{
        printf("elemento nao encontrado.");
    return 0;
    }
}
