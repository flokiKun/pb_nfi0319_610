#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    long int seed=time(NULL);
    srand(seed);
    int N;
    int max;

    printf("Input size of array:");
    scanf("%d",&N);
    int A[N];

    for(int i = 0;i<N;i++) {
        A[i] = rand() % 100; // 0-100 rint
    }

    for(int i = 0;i<N;i+=2) {
        if(i==0) {
            max=A[0];
        }else {
            if(max<A[i]) {
                max = A[i];
            }
        }
    }

    printf("Max Odd Element is %d",max);
    
    return 0;
}
