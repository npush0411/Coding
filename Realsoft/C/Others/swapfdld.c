#include <stdio.h>

int main()
{
    int x, fd, ld, dig;
    long int mf = 1, nn = 0;
    printf("\nEnter No : ");
    scanf("%d", &x);
    for(fd =ld = x%10, x /= 10; x > 9; dig = x%10, x /= 10)
    {
        nn = nn + mf * (x%10);
        mf *= 10;
    }
    fd = x;
    nn = nn * 10 + fd;
    nn = (mf * 10) * ld + nn;
    printf("\nNew Number : %d", nn);
    return 0;
}