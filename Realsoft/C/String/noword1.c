//1 space precision
#include <stdio.h>

int main()
{
    int i = 0, sc = 1;
    char a[100];
    printf("\nEnter String : ");
    gets(a);
    while(a[i] != '\0')
    {
        if(a[i] == 32)
            sc++;
        i++;
    }
    printf("\nNo of words are %d", sc);
    return 0;
}