#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter 3 No : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
        if(a > c)
            printf("\nMax is A : %d", a);
        else
            printf("\nMax is C : %d", c);
    else    
        if(b > c)
            printf("\nMax is B : %d", b);
        else
            printf("\nMax is C : %d", c);
    return 0;
}