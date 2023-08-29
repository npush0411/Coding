#include <stdio.h>
#include <conio.h>

void main()
{
    char ch; int no;
    clrscr();
    printf("\nType a char : ");
    scanf("%c", &ch);
    printf("\nEnter a No : ");
    scanf("%d", &no);
    printf("\n%d\t%c", no, ch);
    printf("\n%d", ch == 'B');
    printf("\n%d", ch == 98);
    printf("\n%d", ch >= 'A');
    printf("\n%d", ch <= 90);
    printf("\n%d", ch >= 'O');
    printf("\n%d", ch <= 122);
    //there are many similar statements
    //its enough for demonstration
    getch();
    return;
}