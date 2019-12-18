#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    long int seed=time(NULL);
    srand(seed);
    int N[10];
    int res = 0;

    for(int i = 0;i<10;i++) {
        N[i] = rand();
        //printf("Input a %d in %d's element\n",N[i],i);
    }

    for(int i = 0;i<10;i++) {
        if(i!=9 && N[i]==N[9]) {
            res = N[i];
        }
    }

    printf("Res is %d\n",res);
    //printf("Seed:%ld\n",seed);

    return 0;
}
