#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();
    printf("Enter No: ");
    scanf("%d", &a);
    b = a + 5;
    printf("\nB = %d", b);
    a = a*2;
    printf("\nA = %d", a);
    getch();
    return;
}