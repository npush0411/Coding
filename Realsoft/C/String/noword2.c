//starting from 0 running till NULL counting NULL
#include <stdio.h>

int main()
{
    int i = 0, sc = 0;
    char a[500];
    printf("\nEnter String : ");
    gets(a);
    while(1)
    {
        if(a[i] == 32 || a[i] == '\0')
            sc++;
        if(a[i] == '\0')
            break;
        else
            i++;        
    }
    printf("\nNo of words are %d", sc);

    return 0;
}