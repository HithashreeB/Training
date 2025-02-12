#include <stdio.h>
#include <stdlib.h>
void findNextGreater(int *arr, int *result, int index, int lastGreater) {
 if (index < 0) return;
 result[index] = (arr[index] < lastGreater) ? lastGreater : -1;
 findNextGreater(arr, result, index - 1, (arr[index] > lastGreater) ? arr[index] : lastGreater);
}
void nextGreaterPrices(int *arr, int *result, int size) {
 findNextGreater(arr, result, size - 1, -1);
}
int main() {
 int arr[] = {6, 8, 0, 1, 3};
 int size = sizeof(arr) / sizeof(arr[0]);
 int *result = (int *)malloc(size * sizeof(int));
nextGreaterPrices(arr, result, size);
 printf("Output: [");
 for (int i = 0; i < size; i++) {
 printf("%d%s", result[i], (i < size - 1) ? ", " : "");
 }
 printf("]\n");
 
 free(result);
 return 0;
}