#include <stdio.h>
#include <conio.h>

void main()
{
    int no, dig, tot = 0;
    clrscr();
    printf("Enter 3 digit No : ");
    scanf("%d", &no);
    dig = no%10;
    tot += dig;
    no /= 10;
    dig = no%10;
    tot += dig;
    no /= 10;
    dig = no%10;
    tot += dig;
    no /= 10;
    printf("\nDigit Sum : %d", tot);
    getch();
    return;
}