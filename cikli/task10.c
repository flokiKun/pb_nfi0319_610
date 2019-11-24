#include <stdio.h>
#include <math.h>

static float factorial (float n){
    return (n < 2) ? 1 : n * factorial (n - 1);
}

int main(){
    float x, e,i=3,n=1;
    printf("Input x:");
    scanf("%f", &x);
    printf("Input e:");
    scanf("%f", &e);

    float s = x;
    while(fabsf(n) >= e){
        s += n;
        if(n > 0){
            n = -1 * powf(x, i) / factorial(i);
        }
        else{
            n = 1 * powf(x, i) / factorial(i);
        }
        i += 2;
    }
    n = sinf(x);
    printf("Result:%f\n", s);
    printf("Sinus:%f\n", n);
    return 0;
}
