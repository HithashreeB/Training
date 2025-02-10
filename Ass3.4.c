//Input:An array N[] of k integers.
//Output:A sorted list of distinct digits present in the array.

#include <stdio.h>
int main() {
    int N[] = {111, 222, 333, 4444, 666};
    int k = sizeof(N) / sizeof(N[0]);
    int digits[10] = {0};
    for (int i = 0; i < k; i++) 
    {
        int num = N[i];
        while (num > 0) 
        {
            digits[num % 10] = 1;
            num /= 10;
        }
    }
    printf("[");
    int first = 1;
    for (int i = 0; i < 10; i++) 
    {
        if (digits[i]) 
        {
            if (!first) 
            {
                printf(", ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("]\n");
    return 0;
}
