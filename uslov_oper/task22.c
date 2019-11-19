#include <stdio.h>

int main() {
    int a,b,c;
    printf("A:\n");
    scanf("%i", &a);
    printf("B:\n");
    scanf("%i", &b);
    printf("C:\n");
    scanf("%i", &c);
    if(a+b>c && a+c>b && b+c>a){
        printf("Triangle exist\n");
    }else{
        printf("Triangle doesn't exist\n");
    }
}
