//Input:An array Fuel[] of m integers representing the fuel consumed at each delivery point.
//Output:An array PostfixSum[] of m integers where PostfixSum[i] is the total fuel consumption from delivery point i to the end of the route.

#include <stdio.h>
int main() {
    int Fuel[] = {5, 10, 3, 7, 8};
    int m = sizeof(Fuel) / sizeof(Fuel[0]);
    int PostfixSum[m];
    PostfixSum[m - 1] = Fuel[m - 1];
    for (int i = m - 2; i >= 0; i--) 
    {
        PostfixSum[i] = PostfixSum[i + 1] + Fuel[i];
    }
    printf("PostfixSum[] = ");
    for (int i = 0; i < m; i++) 
    {
        printf("%d ", PostfixSum[i]);
    }
    
    return 0;
}
