#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, z;
    printf("Enter Two Nos : ");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swap : x : %d\ty : %d\t ", x, y);
    z = x;
    x = y;
    y = z;
    printf("\nAfter Swap : x : %d\ty : %d\t ", x, y);
    getch();
    return;
}