#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    printf("A:");
    scanf("%i",&a);
    printf("B:");
    scanf("%i",&b);
    printf("C:");
    scanf("%i",&c);
    if(abs(a-b) > abs(a-c)){
        printf("C is closer to A |l| = %i",abs(a-c));
    }else if (abs(a-b) < abs(a-c)){
        printf("B is closer to A |l| = %i",abs(a-c));
    }else{
        printf("Closer point doesn't exist");
    }

}
