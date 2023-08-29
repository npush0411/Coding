#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter Character : ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("\nLowercase Vowel Character !!");
    else
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("\nUppercase Vowel Character !!");
        else
            printf("\nOther");
    return 0;
}