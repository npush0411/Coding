#include <stdio.h>

int main()
{
    FILE *c;
    char ch;
    c = fopen("Hello.c", "w");
    printf("\nWrite A C program to print Hello world on consol\nEnter $ to indicate end of program\n\n\n");
    while(1)
    {
        scanf("%c", &ch);
        if(ch == '$')
            break;
        fputc(ch, c);
    }
    fclose(c);
    c = fopen("Hello.c", "r");
    if(c == NULL)
        printf("\nInvalid File");
    printf("\nYou Have wrote the following program\n\n");
    while(1)
    {
        ch = fgetc(c);
        if(feof(c))
            break;
        printf("%c", ch);
    }
    fclose(c);
}