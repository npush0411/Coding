#include <stdio.h>
#include <stdlib.h>
/*
    int - %d
    float - %f
    double %lf
    char - %c
    string - %s
*/

/*
    Relational Operators
    
    > 
    < 
    =

*/

int main()
{
    int *a, n, i;
    printf("\nEnter Elements : ");
    scanf("%d", &n); 
    a = (int *)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
    }
    printf("\nData\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(a+i));
    }
    free(a);
    return 0;
}   

/*
    6.000000
    6.000000000000000000000000000
    */