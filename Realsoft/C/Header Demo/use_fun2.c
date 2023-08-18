#include "myFunction.h"
#include <stdio.h>
int main()
{
    int no;
    printf("\nEnter No : ");
    scanf("%d", &no);
    if(isPrime(no))
        printf("\nPrime");
    else    
        printf("Not Prime !!");
    return 0;
}