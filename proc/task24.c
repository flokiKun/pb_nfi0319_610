#include <stdio.h>

int Even(int K) {
    if(K % 2 == 0 && K!=1) {
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int i,res=0;
    for(i=0;i<10;i++) {
        int buff;
        printf("Input %d element:",i);
        scanf("%d",&buff);
        if(Even(buff)){
            res++;
        }

    }
    printf("%d evens numbers",res);
    return 0;
}
