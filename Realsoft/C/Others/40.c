#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter character : ");
    scanf("%c", &ch);
    if(ch >= '0' && ch <= '9')
        printf("\nDigit Character");
    else    
        printf("\nOther");
    return 0;
}