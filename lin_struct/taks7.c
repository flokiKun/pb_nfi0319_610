#include <stdio.h>

int main() {
    int sec;
    printf("Input sconds:");
    scanf("%d",&sec);
    int h = sec / 3600;
    int m = (sec - (h*3600)) / 60;
    printf("Time is %i:%i",h,m);
    return 0;
}
