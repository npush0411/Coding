#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *p;long int n = 1000000, i;
    p = (int *)malloc(n*sizeof(int));
    printf("\n");
    for(i = 0; i < n; i++)
    {    printf("%4d", *(p + i)); free(p + i);}
    return 0;
}