#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    int res = a/10+a%10;
    if(res % 3 == 0){
        printf("Yes!Yes!Yes!\n");
    }else{
        printf("No\n");
    }
}
