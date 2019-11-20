#include <stdio.h>

int main() {
    int a,i;
    int max=0;
    for(i=0;i<4;i++){
        scanf("%i",&a);
        if(a>max || i==0){
            max = a;
        }
    }
    printf("Max value:%i",max);
}
