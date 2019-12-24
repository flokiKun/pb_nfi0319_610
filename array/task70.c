#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void pretty_print_arr(int *A,int size) {
    for(int i = 0;i<size;i++) {
        printf("A[%i]=%d\n",i,A[i]);
    }
}

int main() {

    long int seed=time(NULL);
    srand(seed);

    int N;
    int max = 10;
    printf("Input size of array:");
    scanf("%d",&N);

    if(N%2!=0) {
        printf("Size of array doesn't even");
        return -1;
    }

    int A[N];

    for(int i = 0;i<N;i++) {
        A[i] = rand() % max;;
    }

    printf("Before\n");
    pretty_print_arr(A,N);

    for(int i = 0;i<N/2;i++) {
        int buff = A[i];
        A[i] = A[i+N/2];
        A[i+N/2] = buff;
    }

    printf("After\n");
    pretty_print_arr(A,N);

    return 0;
}
