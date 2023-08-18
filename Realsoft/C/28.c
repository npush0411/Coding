#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    char ch;
    printf("Enter char: ");
    scanf("%c", &ch);
    printf("\nChar %c is %s", ch, (ch == 48 || ch == 49 ? "Binary" : "Not"));
    getch();
    return;
}