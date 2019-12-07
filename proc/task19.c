#include <stdio.h>

float ringS(float r1, float r2){
    if(r1<r2) {
        printf("Error r1 < r2\n");
    }
    float res =  3.14 * (r1*r1 - r2*r2);
    return res;
}

int main() {
    float r1,r2;
    printf("Input r1:");
    scanf("%f",&r1);
    printf("Input r2:");
    scanf("%f",&r2);
    float res = ringS(r1,r2);
    printf("%.2f",res);
    return 0;
}
