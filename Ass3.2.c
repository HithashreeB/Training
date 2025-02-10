//Input:An array Sales[] of n integers representing the sales amount at each hour of the day.
//Output:An array PrefixSum[] of n integers where PrefixSum[i] is the cumulative sales amount from the start of the day up to hour i.

#include <stdio.h>
int main() {
    int Sales[] = {10, 20, 15, 30, 25};
    int n = sizeof(Sales) / sizeof(Sales[0]);
    int PrefixSum[n];
    PrefixSum[0] = Sales[0];
    for (int i = 1; i < n; i++) 
    {
        PrefixSum[i] = PrefixSum[i - 1] + Sales[i];
    }
    printf("PrefixSum[] = ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", PrefixSum[i]);
    }
    
    return 0;
}
