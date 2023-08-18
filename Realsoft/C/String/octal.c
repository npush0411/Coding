#include <stdio.h>

int main()
{
    char a[50];
    int i = 0;
    printf("\nEnter String : ");
    gets(a);
    while(a[i] != '\0')
    {
        if(a[i] >= '0' && a[i] <= '7')
            i++;
        else
            break;
    }
    if(a[i] == '\0')
        printf("\nOctal String");
    else
        printf("\nNot Octal String");
}
