#include <stdio.h>

int main()
{
    int x, i = 0, oc = 0, ec = 0;
    while(i <= 5)
    {
        printf("\nEnter No : ");
        scanf("%d", &x);
        if(x%2 == 2)
            ec++;
        else
            oc++;
        i++;
    }
    printf("\nOdd Count : %d\tEven Count : %d", oc, ec);
    return 0;
}