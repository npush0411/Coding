#include <stdio.h>

int main()
{
    int x = 10;
    printf("\n Value : %d", x);
    printf("\n Address : %u", &x);
    printf("\n Value by * : %d", *(&x));
    return 0;
}