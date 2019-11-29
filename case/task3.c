#include <stdio.h>

int main() {
    int inpt;
    scanf("%d", &inpt);


    char* str = "";
    switch (inpt) {
        case 12: case 1: case 2: str = "Winter"; break;
        case 3: case 4: case 5: str = "Spring"; break;
        case 6: case 7: case 8: str = "Summer"; break;
        case 9: case 10: case 11: str = "September"; break;
        default: str = "Don't exist in our mind";
    }

    printf("%s", str);

    return 0;
}
