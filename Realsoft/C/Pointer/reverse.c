#include <stdio.h>
#include <string.h>

void reverse(char *a, char *b)
{
    b = b + (strlen(a) - 1);
    *b = '\0';
    b--;
    while (*a)
    {
        *b = *a;
        b--; a++;
    }   

}
int main()
{
    char a[50], b[50];
    printf("\nEnter String : ");
    gets(a);
    printf("\nOriginal String : ");
    puts(a);
    reverse(a, b);
    printf("\nNew String : ");
    puts(b);
    return 0;
}