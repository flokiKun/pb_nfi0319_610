#include <stdio.h>

int main() {
    int x;
    printf("Input a 3-digit number:\n");
    scanf("%d",&x);
    int s = (x/100) + ((x%100)/10) + (x % 10);
    if(s>=10){
        printf("digits sum of %d is two-digit number",x);
    }
    else{
        printf("digits sum of %d is  not two-digit number",x);
    }
}
