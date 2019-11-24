#include <stdio.h>

int main() {
    float i,j,x;
    printf("Input x:");
    scanf("%f",&x);
    double S=0;
    for(i=2,j=4;i<=22;){
        S += (i*x)/(x*x+j*j);
        i += 2;
        j += 1;
    }
    printf("Result:%f",S);
}
