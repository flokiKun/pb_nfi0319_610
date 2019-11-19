#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("Input a side of triangle:\n");
    scanf("%f",&a);
    float res = sqrtf(3) * powf(a,2) / 4;
    printf("Square is:%.2f\n",res);
}
