//ANÁLISE DE COMPLEXIDADE DE TEMPO DO CÓDIGO ABAIXO
//NÃO É PRA RODAR
M = a[0][0];

for(i = 0; i < n; i++){ 3+2n
    for(j = 0; j<n; j++){ 3+2n
        if (M < A[i][j]){ 1n
            M = A[i][j] 1n
        }
    }
}

(3+2n) * (3+2n) = 9 + 6n + 6n + 4n^2
//Na verdade o 3 vai pra fora, pois ele só conta na init

4n^2 + 12n + 9 + 2n
4n^2 + 14n +

//correção
3 + 2n + n(2 + 2n + 2n) // esse 2 solto entra para as
// atualizações do for que está dentro do outro
f(n) = 3 + 4n + 4n^2

