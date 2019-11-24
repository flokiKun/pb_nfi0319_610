#include <stdio.h>
#include <math.h>

static float factorial (float n){
    return (n < 2) ? 1 : n * factorial (n - 1);
}

int main(){
    float x, e, s = 0,i=1,n=1;
    printf("Input x:");
    scanf("%f", &x);
    printf("Input e:");
    scanf("%f", &e);

    while(fabsf(n) >= e){
        s += n;
        if(n > 0){
            n = -1 * powf(x, i * 2) / factorial (i * 2);
        }
        else{
            n = 1 * powf(x, i * 2) / factorial (i * 2);
        }
        i++;
    }
    n = cosf(x);
    printf("Result:%f\n", s);
    printf("Cosinus:%f\n", n);
    return 0;
}
