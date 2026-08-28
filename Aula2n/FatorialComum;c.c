#include <stdio.h>

int fatorial (int n) {
    if (n == 0){
        return 1;
    }
    else{
            int f = 1;
        for(int i = 1; i <= n; i++){
            f = f*i;
        }
    }
}

int main(){
    int res = fatorial(10);
    printf("%i", res);
    return 0;
}
