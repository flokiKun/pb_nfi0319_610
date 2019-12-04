#include <stdio.h>

int main() {

    int i;
    float res=0;

    printf("Star input series of number:");
    for(i=0;i<10;i++) {
        float buff;
        scanf("%f",&buff);
        res += buff;
    }
    res /= 10;

    printf("Result is:%f",res);
}
