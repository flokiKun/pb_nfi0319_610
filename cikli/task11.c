#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double n=0;
    for(i=99;i>=3;){
        if(i!=99){
            n = sqrt(n + sqrt(i));
        }else{
            n = sqrt(i);
        }
        i -= 3;
    }
    printf("%f",n);
}
