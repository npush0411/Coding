#include <stdio.h>
#include "myFunction.h"

int main()
{
    int no;
    printf("\nEnter No : ");
    scanf("%d", &no);
    printf("\nFactorial : %d", factorial(no));
    return 0;
}
