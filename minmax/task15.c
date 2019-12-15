#include <stdio.h>

int main() {

    unsigned int B,C;
    int max,pos_max;

    printf("Input B:");
    scanf("%d",&B);
    printf("Input C:");
    scanf("%d",&C);

    if(C>B && B>0 && C<=10) {
        for(int i=B;i<C;i++) {
            int buff;
            printf("Input a %d number:",i);
            scanf("%d",&buff);
            if(i==0) {
                max=buff;
                pos_max=i;
            }

            if(buff>max) {
                max = buff;
                pos_max = i;
            }
        }

        printf("Max value:%d Pos:%d",max,pos_max);

    }else{
        printf("00");
    }

    return 0;
}
