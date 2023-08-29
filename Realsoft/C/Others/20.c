#include <stdio.h>
#include <conio.h>

void main()
{
    int no, dig, tot = 0;
    clrscr();
    printf("\nEnter 3 dig No : ");
    scanf("%d", &no);
    dig = no%10;
    tot = tot*10 + dig;
    no /= 10;
    dig = no%10;
    tot = tot*10 + dig;
    no /= 10;
    dig = no%10;
    tot = tot*10 + dig;
    no /= 10;
    printf("\nResult : %d", tot);
    getch();
    return;
}