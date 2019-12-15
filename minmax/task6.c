#include <stdio.h>

int main() {

    unsigned int N;
    int min,max;

    printf("Input N:");
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        int buff;
        printf("Input a %d number:",i+1);
        scanf("%d",&buff);
        if(i==0) {
            min=max=buff;
        }else if (i==1) {
            if(buff<min) {
                min = buff;
            }
        }
        if(buff>max) {
            max = buff;
        }
    }

    printf("Min:%d Max:%d",min,max);

    return 0;
}
