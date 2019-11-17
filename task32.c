#include <stdio.h>

int main() {
    int d=3 ,z=1,m=1,n;
    printf("Input the cost of socks:");
    scanf("%i", &n);
    float sum = d*n*0.5 + z*n + m*n;
    printf("Pribil is %0.1f\n",sum);
    return 0;
}