#include <stdio.h>
#include <math.h>

int main() {
    int S1,S2;
    printf("Input a square of Circle:");
    scanf("%i",&S1);
    printf("Input a square of BB:");
    scanf("%i",&S2);
    if(S1 <= M_PI*S2/4){
        printf("Yes");
    }else{
        printf("No");
    }

}
