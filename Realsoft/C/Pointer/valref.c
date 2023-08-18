#include <stdio.h>

void swap(int a, int b)
{
    a += b;
    b = a - b;
    a -= b;
}
void swap(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}
int main()
{
    int x, y;
    printf("\nEnter 2 Nos : ");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swap\nX : %d\tY : %d", x, y);
    swap(x, y);
    printf("\nAfter Swap\nX : %d\tY : %d", x, y);
    printf("\nCalling By Reference\nBefore Swap\nX : %d\tY : %d", x, y);
    swap(&x, &y);
    printf("\nAfter Swap\nX : %d\tY : %d", x, y);
}