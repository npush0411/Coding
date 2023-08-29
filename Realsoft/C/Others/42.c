/*A program to check input is hex or not*/
#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter Char : ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'F')
        printf("\nHex Alphabate");
    else
        if(ch >= '0' && ch <= '9')
            printf("\nHex Digit");
        else
            printf("\nOther");
    return 0;
}