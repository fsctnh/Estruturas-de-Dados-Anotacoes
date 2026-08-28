#include <stdio.h>

int num = 10;
int fatorial (int n) {
    if (n == 0){
        return 1;
    }
    else{
        return n * fatorial (n-1);
    }

    }

int main(){

    int res = fatorial(num);
    printf("%i", res);
    return 0;
}
