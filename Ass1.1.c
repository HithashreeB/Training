//Find the First duplicate in the array size of 10

#include <stdio.h>

int findFirstDuplicate(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
{
        for (int j = i + 1; j < size; j++) 
{
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1; 
}

int main() {
    int arr[10] = {5, 7, 4, 8, 7, 10, 11, 14, 12, 9};
    int result = findFirstDuplicate(arr, 10);
    
    if (result != -1) {
        printf("First duplicate: %d\n", result);
    } else {
        printf("No duplicate found.\n");
    }
    
    return 0;
}




