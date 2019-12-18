#include <stdio.h>

int main() {

    long int N;
    int A,B;

    printf("Input Size of Array:");
    scanf("%ld",&N);
    int Res[N];

    if(N<2) {
        printf("Array is too small :(");
        return -1;
    }

    printf("Input A:");
    scanf("%d",&A);
    Res[0]=A;
    printf("Input B:");
    scanf("%d",&B);
    Res[1]=B;

    for(int i = 2;i<N;i++) {
        Res[i] = Res[i-1] + Res[i-2];
    }

    for(int i=0;i<N;i++) {
        printf("%d's elemet is %d\n",i,Res[i]);
    }

    return 0;
}
