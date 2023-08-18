#include <stdio.h>

int main()
{
    char a[50], b[50];
    int i = 0;
    printf("\nEnter No : ");
    gets(a);
    while(1)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
            b[i] = a[i] - 32;
        else
            b[i] = a[i];
        if(a[i] == '\0')
            break;
        i++;
    }
    puts(a);
    puts(b);
    return 0;

}