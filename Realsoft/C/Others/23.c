#include <stdio.h>
#include <conio.h>

void main()
{
    int no;
    clrscr();
    printf("Enter No: ");
    scanf("%d", &no);
    printf("%s", no%5 == 0 ? "\nDivisible" : "\nNot-Divisible");
    getch();
    return ;
}