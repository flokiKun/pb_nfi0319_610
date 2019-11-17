#include <stdio.h>

int main() {
    int x;
    printf("Input a four-digit number:");
    scanf("%i",&x);
    printf("Result:%i",x/1000 + x%10);
    return 0;
}
