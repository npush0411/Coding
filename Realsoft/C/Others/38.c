#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter No : ");
    scanf("%d", &a);
    if(a%5 == 0)
        printf("\nDivisible By 5");
    else
        printf("\nNot Divisible");
    return 0;
}