#include <stdio.h>

int main()
{
    int x, i = 1, pc = 0, nc = 0, zc = 0;
    while(i <= 10)
    {
        printf("\nEnter No : ");
        scanf("%d", &x);
        if(x < 0)
            nc++;
        else
            if(x == 0)
                zc++;
            else
                pc++;
        i++;
    }
    printf("\n+ve : %d\t-ve : %d\t0s : %d", pc, nc, zc);
    return 0;
}