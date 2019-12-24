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
    int A[N];

    for(int i = 0;i<N;i++) {
        A[i] = rand() % max;;
    }

    printf("Before\n");
    pretty_print_arr(A,N);

    int maxIndex,minIndex, Max,Min;

    for(int i=0;i<N;i++) {
        if(i==0) Min=Max=A[0];

        if(A[i]<Min) Min=A[i],minIndex=i;
        if(A[i]>Max) Max=A[i],maxIndex=i;
    }

    if(abs(maxIndex-minIndex)==1) {
        printf("Error max-min=1");
        return -1;
    }

    if(minIndex<maxIndex) {
        for(int i=minIndex,j=0;i<=maxIndex/2;i++,j++) {
            int buff = A[i];
            A[i] = A[maxIndex-j];
            A[maxIndex-j] = buff;
        }
    } else if (minIndex>maxIndex) {
        for(int i=maxIndex,j=0;i<=minIndex/2;i++,j++) {
            int buff = A[i];
            A[i] = A[minIndex-j];
            A[minIndex-j] = buff;
        }
    } else {
        printf("Error min=max");
        return -1;
    }

    printf("After\n");
    pretty_print_arr(A,N);


    return 0;
}
