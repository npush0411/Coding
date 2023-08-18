#include <stdio.h>

int main()
{
    int n, i = 0;
    int *ptr;
    printf("\nInformation Count ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("\nData : \n");
    while(i < n)
    {
        scanf("%d", (ptr+i) );
        i++;
    }
    printf("\nData");
    for(i = 0; i < n; );
}