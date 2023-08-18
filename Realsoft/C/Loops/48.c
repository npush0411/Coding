#include <stdio.h>

int main()
{
    int x, i = 1, tot = 0;
    while(i <= 5)
    {
        printf("\nEnter No : ");
        scanf("%d", &x);
        tot += x;
        i++;
    }
    printf("\nTotal : %d", tot);
    return 0;
}