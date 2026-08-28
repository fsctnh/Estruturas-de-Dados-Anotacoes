#include <stdio.h>

int fibo_r(int n){
    if (n == 0 || n == 1)
        return n;
    else
        return fibo_r(n-1) + fibo_r(n-2);
}

int main(){

    int res = fibo_r(40);
    printf("%i", res);
    return 0;
}
