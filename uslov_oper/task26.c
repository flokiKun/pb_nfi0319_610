#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    if(a/10 > a%10){
        printf("First is bigger!\n");
    }else if (a/10 < a%10){
        printf("Second is bigger\n");
    }
}
