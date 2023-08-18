#include <stdio.h>

int main()
{
    int i = 0;
    char a[50], b[50];
    printf("\nEnter String : ");
    gets(a);
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    puts(a);
    puts(b);
    return 0;
}