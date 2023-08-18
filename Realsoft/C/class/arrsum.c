//Function call by passing arrays
//Function to return sum of array
#include <stdio.h>

int main()
{
    int x[5], i = 0;
    int arrSum(int [], int);
    printf("\nData : \n");
    for(i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    printf("\nSum is %d", arrSum(x, 5));
    return 0;
}
int arrSum(int y[], int n)
{
    int sum = 0, i = 0;
    for(i = 0; i < n; i++)
        sum += y[i];
    return sum;
}