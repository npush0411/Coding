#include <stdio.h>

int main()
{
    char a = 'E';
    char *b;
    b = &a;
    printf("\n Value : %c", a);
    printf("\n Address : %u", &a);
    printf("\n Address by b : %u", b);
    printf("\n Value : %c", *(&a));
    printf("\n Value : %c", *(*(&b)));
    printf("\n Value : %c", *b);
    a = *b + 32;
    printf("\n Value : %c", a);
    *b = *b - 32;
    printf("\n Value : %c", *b);
}