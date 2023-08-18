#include <stdio.h>

int main()
{
    int x, i = 1, cnt = 0;
    while(i <= 10)
    {
        printf("\nEnter No : ");
        scanf("%d", &x);
        cnt += (x%2);
        i++;
    }
    printf("\nOdd Count : %d\tEven Count : %d", 10-cnt, cnt);
    return 0;
}