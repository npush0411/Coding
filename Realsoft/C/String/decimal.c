#include <stdio.h>

int main()
{
    int i = 0;
    char a[50];
    printf("\nEnter String : ");
    gets(a);
    while(a[i])
    {
        if(a[i] >= '0' && a[i] <= '9')
            i++;
        else
            break;
    }
    return 0;
}