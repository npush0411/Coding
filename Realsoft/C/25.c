#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    clrscr();
    printf("Type a char : ");
    scanf("%c", &ch);
    printf("\nCharacter %c is %s", ch, (ch >= 48 && ch <= 557) ? "Digit" : "Other");
    getch();
    return;
}