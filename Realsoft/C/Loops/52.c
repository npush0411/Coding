#include <stdio.h>

int main()
{
    int no, sum = 0;
    printf("\nEnter No : ");
    scanf("%d", &no);
    while(no != 0)
    {
        sum += (no%10);
        no /= 10;
    }
    printf("\nDigit Sum : %d", sum);
    return 0;
}