#include <stdio.h>
#include <math.h>

int main() {
    float a,b,h,ugol;
    printf("Input a side\n");
    scanf("%f",&a);
    printf("Input b side\n");
    scanf("%f",&b);
    printf("Input height\n");
    scanf("%f",&h);
    printf("Input a angle\n");
    scanf("%f",&ugol);
    double rad = ugol * M_PI / 180;
    double res = a*b*sin(rad)*h;
    printf("Result is:%.2lf",res);
    return 0;
}
