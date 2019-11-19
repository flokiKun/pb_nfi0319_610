#include <stdio.h>

int main() {
    int A[3];
    scanf("%d",&A[0]);
    scanf("%d",&A[1]);
    scanf("%d",&A[2]);
    if(A[0]==A[1]){
        printf("3");
    }
    else if (A[0]==A[2]) {
        printf("2");
    }
    else if (A[1]==A[2]){
        printf("1");
    }
}
