#include <stdio.h>

int main() {

    int iter=0;

    printf("Star input a series:");
    while(1) {
        int buff;
        scanf("%d",&buff);
        if(buff==0)
            break;
        iter++;
        
    }
    printf("Iteration num:%d",iter);
}
