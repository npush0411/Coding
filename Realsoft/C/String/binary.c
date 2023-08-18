#include <stdio.h>

int main()
{
    char a[50];
    int i = 0;
    printf("\nEnter String : ");
    gets(a);
    while(a[i] != '\0')
    {
        if(a[i] != '0' && a[i] != '1')
            break;
        i++;
    }
    if(a[i] == '\0')
        printf("\nBinary String");
    else
        printf("\nNot Binary String");
    return 0;
}