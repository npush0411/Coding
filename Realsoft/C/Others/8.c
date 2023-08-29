#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    printf("\nRoll No : %d", 16);
    printf("\nMarks \n");
    printf("%d\t%d\t%d", 6, 8, 4);
    printf("\nTotal : %d", (6+8+4));
    printf("\nAverage : %f", (6+8+4)/3.0);
    printf("\nGrade : %c", 'B');
    getch();
    return;
}