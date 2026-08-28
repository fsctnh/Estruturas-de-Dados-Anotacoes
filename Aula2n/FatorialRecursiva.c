#include <stdio.h>

int fatorial (int n) {
    if (n == 0){
        return 1;
    }
    else{
        return n * fatorial (n-1);
    }
}

int main(){
    int res = fatorial(10);
    printf("%i", res);
    return 0;
}
