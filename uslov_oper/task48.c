#include <stdio.h>

int main() {
    int a;
    int i;
    for(i=0 ; i<3 ; i++ ){
        scanf("%i", &a);
        if (a>=0){
            printf("%i\n",a*a);
        }
    }
}
