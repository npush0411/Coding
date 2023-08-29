#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter 3 Nos : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nMaximum No : %d", ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)));
    return 0;
}