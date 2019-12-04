#include <stdio.h>

int main() {

    int n,i,res=0,zero=0;

    printf("Input:");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        int buff;
        scanf("%d",&buff);
        if(zero==1) {
            res += buff;
        }
        if (buff==0) {
            zero++;
        }
    }

    printf("Result is %d",res);
    
}
