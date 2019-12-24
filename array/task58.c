#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    long int seed=time(NULL);
    srand(seed);

    int N;
    int max = 10;
    printf("Input size of array:");
    scanf("%d",&N);

    int A[N],B[N];
    
    for(int i = 0;i<N;i++) {
        A[i] = rand() % max;;
    }
    
    
    for(int i = 0;i<N;i++) {
        int res = 0;
        for(int j=i;j<N;j++) {
            res += A[j];
        }
        B[i] = res;
    }


    for(int i = 0;i<N;i++) {
        printf("B[%i]=%d\n",i,B[i]);
    }

    return 0;
}
