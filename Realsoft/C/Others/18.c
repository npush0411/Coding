#include <stdio.h>
#include <conio.h>

void main()
{
    char ch; int no;
    clrscr();
    printf("Enter a Character : ");
    scanf("%c", &ch);
    printf("\nEnter a No : ");
    scanf("%d", &no);
    printf("\n%c\n%d", ch, no);
    printf("\n%d", ch == 'B' || ch == 'b');
    //similar statements
    getch();
    return;
}