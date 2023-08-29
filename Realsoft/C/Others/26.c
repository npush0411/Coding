#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    clrscr();
    printf("Enter a char : ");
    scanf("%c", &ch);
    printf("\nChar %c is %s", ch, (ch >= 65 && ch <= 90) ? "Uppercase" : "Lowercase");
    getch();
    return;
}