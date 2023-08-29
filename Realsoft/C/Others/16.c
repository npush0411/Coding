#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y;
    clrscr();
    printf("\nEnter No: ");
    scanf("%d", &x);
    x++;
    printf("\n%d", x);
    ++x;
    printf("\n%d", x);
    y = ++x;
    printf("\nx : %d \n y : %d", x, y);
    y = x++;
    printf("\nx : %d \n y : %d", x, y);
    getch();
    return ;
}