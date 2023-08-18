#include "myFunction.h"
#include <stdio.h>

int main()
{
    int no;
    printf("\nEnter No : ");
    scanf("%d", &no);
    printf("\nDigit Sum : %d", digSum(no));
    return 0;
}