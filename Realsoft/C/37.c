#include <stdio.h>

int main()

{
    int val;
    printf("\nEnter No : ");
    scanf("%d", &val);
    if(val%2 == 0)
        printf("\nEven No : ");
    else
        printf("\nOdd");
    return 0;
}