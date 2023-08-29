#include <stdio.h>
#include <string.h>

int main()
{
    char p[50];
    void display(char []);
    printf("\nString : ");
    gets(p);  
    display(p);
    return 0;
}

void display(char p[])
{
    puts(p);
}