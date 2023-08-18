#include <stdio.h>
#include <conio.h>

void main()
{
    int no;
    clrscr();
    printf("Enter No : ");
    scanf("%d", &no);
    printf("\n%s", no == 0 ? "Zero" : "Non-zero");
    getch();
    return;
}