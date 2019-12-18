#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    long int seed=time(NULL);
    srand(seed);
    int N;

    printf("Input size of array:");
    scanf("%d",&N);
    int A[N];

    for(int i = 0;i<N;i++) {
        A[i] = rand() % 100;
        //printf("Input a %d in %d's element\n",N[i],i);
    }

    printf("Odd\n");
    for(int i = 0;i<N;i+=2) {
        printf("Element %d = %d\n",i+1,A[i]);
    }

    printf("Even\n");
    for(int i = 1;i<N;i+=2) {
        printf("Element %d = %d\n",i+1,A[i]);
    }

    return 0;
}
