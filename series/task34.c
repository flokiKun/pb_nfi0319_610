#include <stdio.h>

int main() {

    int N,K,i,j;

    printf("Input N:");
    scanf("%d",&N);
    printf("Input K:");
    scanf("%d",&K);

    for(i=0;i<K;i++) {
        int sum=0;
        int two_c=0;
        for(j=0;j<N;j++) {
            int buff;
            printf("Input %d:%d number:",i,j);
            scanf("%d",&buff);
            sum += buff;
            if(buff==2) {
                two_c += 1;
            }

        }
        printf("Res for %d series is %d\n",i, two_c > 0 ? sum : 0);
    }
}
