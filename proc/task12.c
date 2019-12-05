#include <stdio.h>

void SwitchTwoVarieble(float *a1 ,float *a2) {
    float temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

void SortInc3(float *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = (size - 1); j > i; j--) {
            if (arr[j - 1] > arr[j]) {
                SwitchTwoVarieble(&arr[j - 1],&arr[j]);
            }
        }
    }
}

void FillArr(float *arr, int size) {
    printf("Start fill the array.\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d]=", i);
        scanf("%f", &arr[i]);
    }
}

void PrettyPrintArr(float *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.1f ", arr[i]);
    }
}

int main() {
    float a[3],b[3];
    FillArr(a, 3);
    FillArr(b, 3);
    SortInc3(a,3);
    SortInc3(b,3);
    PrettyPrintArr(a, 3);
    PrettyPrintArr(b, 3);
    return 0;
}
