#include <stdio.h>
#include <math.h>

int main() {
    float a,b;
    printf("Input first number:");
    scanf("%f", &a);
    printf("Input first second:");
    scanf("%f", &b);
    float res1 = powf(a,3.0) + powf(b,3.0);
    printf("average of a^3 and b^3 = %.2f\n",res1*0.5);
    float res2 = fabsf(a)*fabsf(b);
    printf("average of |a|*|b| = %.2f\n",res2*0.5);
    return 0;
}
