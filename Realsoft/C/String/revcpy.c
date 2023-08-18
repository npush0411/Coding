#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j;
    char a[50], b[50];
    printf("\nEnter String : ");
    gets(a);
    j = strlen(a) - 1;
    while (j >= 0)
    {
        b[i] = a[j];
        j--;
        i++;
    }    
    b[i] = '\0';
    puts(b);
    return 0;
}