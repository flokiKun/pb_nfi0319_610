#include <stdio.h>

int factorial (int n){
    return (n < 2) ? 1 : n * factorial (n - 1);
}

int main() {
    int i;
    int res;
    for(i=0;i<5;i++) {
        int buff;
        printf("Input %d element:",i);
        scanf("%i",&buff);
        res = factorial(buff);
        printf("Res for %i is %i\n",buff,res);

    }
    return 0;
}
