#include <stdio.h>

int main()
{
    int x = 10;
    int *y = &x;
    printf("\n Value : %d", x);
    printf("\n Address : %u", &x);
    printf("\n Address by y : %u", y);
    printf("\n Value : %d", *(&x));
    printf("\n Magic : %c", 55 + *(&x));
    printf("\n Address : %u", y);
    printf("\n Address Of Pointer Variable : %u", &y);
    x += 5;
    printf("\n Value : %d", *y);
    *y += 5;
    printf("\n Value : %d", x);
    return 0;
}