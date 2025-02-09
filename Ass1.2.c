#include <stdio.h>

float findSecondMin(float arr[], int size) {
    float min = arr[0], secondMin = arr[1];
    if (secondMin < min) {
        float temp = min;
        min = secondMin;
        secondMin = temp;
    }
    
    for (int i = 2; i < size; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    
    return secondMin;
}

int main() {
    float arr[] = {5.3,45.2,11.3,10.5,2.7,56.12,14.9,3.5,15.4,10.7};
    int size = sizeof(arr) / sizeof(arr[0]);
    float result = findSecondMin(arr, size);
    
    printf("Second minimum: %.1f\n", result);
    
    return 0;
}

OUTPUT:
Second minimum: 3.5