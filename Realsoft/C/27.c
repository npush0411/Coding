#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    char ch;
    printf("Enter Char : ");
    scanf("%c", &ch);
    printf("\nChar %c is %s", ch, (ch >= 97 && ch <= 122) ? "Lowercase" : "Not-Lowercase");
    getch();
    return;
}