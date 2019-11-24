#include <stdio.h>

int main() {
    int number,d=2;
    printf("Input a number for factorizing:");
    scanf("%d",&number);
    while(d*d <= number){
        if(number%d==0){
            printf("%d,",d);
            number /= d;
        }else{
            d += 1;
        }
    }
    if (number > 1){
        printf("%d",number);
    }
}
