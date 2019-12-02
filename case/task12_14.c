#include <stdio.h>
#include <math.h>

int main() {

    // n - номер элемента ,  a - значение н-го элемента.
    unsigned int n;
    float a;
    struct triangle{
        float side;
        float r_inside;
        float r_outside;
        float square;
    };
    printf("Index of element:");
    scanf("%d",&n);
    printf("Value of element:");
    scanf("%f",&a);
    struct triangle t;
     switch(n){
         case 1:
             t.side = a;
             t.r_inside = a*sqrtf(3)/6;
             t.r_outside = t.r_inside*2;
             t.square = a*a*sqrtf(3)/4;
             printf("Side:%.2f R1:%.2f R2:%.2f S:%.2f",t.side,t.r_inside,t.r_outside,t.square);
             break;
         case 2:
             t.side = a*6/sqrtf(3);
             t.r_inside = a;
             t.r_outside = t.r_inside*2;
             t.square = t.side*t.side*sqrtf(3)/4;
             printf("Side:%.2f R1:%.2f R2:%.2f S:%.2f",t.side,t.r_inside,t.r_outside,t.square);
             break;
         case 3:
             t.r_inside = a/2;
             t.side = t.r_inside*6/sqrtf(3);
             t.r_outside = a;
             t.square = t.side*t.side*sqrtf(3)/4;
             printf("Side:%.2f R1:%.2f R2:%.2f S:%.2f",t.side,t.r_inside,t.r_outside,t.square);
             break;
         case 4:
             t.square = a;
             t.side =  2*sqrtf(a)/powf(3,0.25);
             t.r_inside = t.side*sqrtf(3)/6;
             t.r_outside = t.r_inside*2;
             printf("Side:%.2f R1:%.2f R2:%.2f S:%.2f",t.side,t.r_inside,t.r_outside,t.square);
             break;
         default:
             printf("%d element doesn't exist\n",n);
     }

    return 0;
}
