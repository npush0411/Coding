#include "myFunction.h"
#include <stdio.h>

int main()
{
    int no;
    printf("\nEnter No : ");
    scanf("%d", &no);
    printf("\nReverse : %d", reverse(no));
    return 0;
}