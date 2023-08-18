#include <stdio.h>
#include <conio.h>

void main()
{
    int no;
    clrscr();
    printf("\nEnter No : ");
    scanf("%d", &no);
    printf("\nNo : %d", no);
    printf("\nSquare : %d", (no*no));
    getch();
    return ;
}