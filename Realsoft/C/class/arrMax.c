//Function call by passing arrays
//Function to return maximum in array
#include <stdio.h>

int main()
{
    int x[5], i = 0;
    int arrMax(int [], int);
    printf("\nData : \n");
    for(i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    printf("\nMax is %d", arrMax(x, 5));
    return 0;
}
int arrMax(int y[], int n)
{
    int max = 0, i = 0;
    for(i = 0; i < n; i++)
        if(max < y[i])
            max = y[i];
    return max;
}
