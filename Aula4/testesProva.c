#include <stdio.h>

float serie(float N) {
    // Caso base: quando N chega a 0, não há mais o que somar
    if (N == 0) {
        return 0.0;
    }

    float termo_atual;
    termo_atual = ((N*N + 1.0) / (N + 3.0));
    printf("TERMO ATUAL RESULTOU EM: %f \n", termo_atual);

    return (termo_atual + serie(N-1));
}

int main(){

    float res = serie(3);

    printf(" %f \n", res);

    return 0;
}
