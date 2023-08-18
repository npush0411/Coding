#include <stdio.h>

int main()
{
    char a[40];
    int i;
    gets(a);
    for(i = 1; a[i] != '\0'; i++);
    printf("\nString length : %d", i);
    return 0;

}