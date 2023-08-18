#include <stdio.h>
#include <string.h>
void concat(char *src1, char *src2, char *dest)
{
    while(*src1)
    {
        *dest = *src1;
        dest++; src1++;
    }
    *dest = ' ';
    dest++;
    *dest = ':';
    dest++;
    *dest = ' ';
    dest++;
    while(*src2)
    {
        *dest = *src2;
        dest++; src2++;
    }
    *dest = '\0';
}
int main()
{
    char a[50], b[50], c[100];
    printf("\nEnter String 1 : ");
    gets(a);
    printf("\nEnter String 2 : ");
    gets(b);
    puts(a);
    puts(b);
    concat(a, b, c);
    printf("\nNew String :\n ");
    puts(c);
    return 0;
}