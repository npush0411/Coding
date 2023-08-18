#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y;
    clrscr();
    printf("Enter two Nos : ");
    scanf("%d %d", &x, &y);
    printf("\nMax : %d", x > y ? x : y);
    getch();
    return;
}