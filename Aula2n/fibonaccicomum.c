#include <stdio.h>

int fibo(int n){
    int i, t, c, a=0, b=1;
    for(i = 0; i < n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}
int main(){

    int res = fibo(40);
    printf("%i", res);
    return 0;
}
