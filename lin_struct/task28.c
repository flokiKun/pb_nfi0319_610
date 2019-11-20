#include <stdio.h>
#include <math.h>

int main() {
    float R,H;
    int N;
    printf("Radius:");
    scanf("%f",&R);
    printf("Height:");
    scanf("%f",&H);
    printf("Number:");
    scanf("%i",&N);
    double ob = M_PI * R*R * H * N;
    printf("V:%.21f",ob);
}
