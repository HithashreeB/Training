//Input: An array P[] of n integers representing the processing times of orders, in the order they were processed.
//Output: The count of inversion pairs in the array.

#include <stdio.h>
int countInversions(int arr[], int n) 
{
    int count = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int P[] = {1, 9, 6, 4, 5};
    int n = sizeof(P) / sizeof(P[0]);
    printf("The inversion count is %d\n", countInversions(P, n));
    return 0;
}
