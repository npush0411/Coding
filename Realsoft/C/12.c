#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    int x;
    clrscr();
    printf("\nType a char : ");
    scanf("\n %c", ch);
    printf("\nEnter No : ");
    scanf("%d", &x);
    printf("\nNo : %d", x);
    printf("\nNo : %c", ch);
    getch();
    return;
}