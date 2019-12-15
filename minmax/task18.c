#include <stdio.h>

int main() {

    unsigned int N;
    int max1,max2,j,k; //j - pos of first max. k - pos of second max.

    printf("Input N:");
    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        int buff;
        printf("Input a %d number:",i+1);
        scanf("%d",&buff);
        if(i==0) {
            max1=max2=buff;
            j=k=i;
        }else if (i==1) {
            if(buff>max1) {
                max1 = buff;
                j=i;
            }
        }
        if(buff>max2) {
            max2 = buff;
            k=i;
        }
    }
    if(max1 == max2) {
        printf("0");
    }else{
        printf("Count:%d",k-j-1);
    }


    return 0;
}
