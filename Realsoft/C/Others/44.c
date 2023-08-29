#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter No : ");
    scanf("%d", &a);
    if(a%5 == 0  && a%7 == 0)
        printf("\nDivisible By both 5 & 7");
    else
        if(a%5 == 0)
            printf("\nDivisible By 5");
        else
            if(a%7 == 0)
                printf("\nDivisible by 7");
            else
                printf("\nNot divisible by both");
    return 0;

}