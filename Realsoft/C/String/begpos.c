#include <stdio.h>

int main()
{
    int i = 0, sc = 0;
    char a[50];
    printf("\nEnter String : ");
    gets(a);
    while (1)
    {
        if(a[i] == 32 || a[i] == '\0')
        {
            printf("\n%d", sc);
            if(a[i] == '\0')
                break;
            sc = i + 1;
        }
        i++;
    }
           
}