//Uppercase if any lower case
#include <stdio.h>

int main()
{
    int i = 0;
    char a[50];
    printf("\nEnter String : ");
    gets(a);
    while(a[i] != '\0')
    {
        if(a[i] >= 'a' && a[i] <= 'z')
           a[i] -= 32; 
        i++;
    }
    puts(a);
    return 0;
}