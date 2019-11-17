#include <stdio.h>

int main() {
    float m,w;
    printf("Input m:\n");
    scanf("%f",&m);
    printf("Input w:\n");
    scanf("%f",&w);
    float c = w*m;
    float h = m-c;
    printf("Water:%.2f Salt:%.2f\n",h,c);
    return 0;
}
