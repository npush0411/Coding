#include "myFunction.h"
#include <stdio.h>

int main()
{
    int no;
    printf("Enter No : ");
    scanf("%d", &no);
    if(isSuperprime(no) == 0)
        printf("\nNot Prime");
    else
        if(isSuperprime(no) == 2)
            printf("\nSuper-Prime");
        else
            printf("\nPrime");
    return 0;
}