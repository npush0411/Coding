#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter No :");
    scanf("%d", &a);
    if(a < 0)
        printf("\nBelow Zero");
    else
        if(a > 100)
            printf("\nAbove 100");
        else
            printf("\nWithin Range 0-100");
    return 0;
}