#include <stdio.h>

int main()
{
    int i = 0, flg = 0;
    char a[50];
    printf("\nEnter String : ");
    gets(a);
    puts(a);
    while(a[i] != '\0')
    {
        if(a[i] == 32)
            flg = 0;
        if(flg == 0)
            if(a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = a[i] - 32;
                flg = 1;
            }
        else
            if(a[i] >= 'A' && a[i] <= 'Z')
                a[i] += 32; 

        i++;
    }
    puts(a);
    return 0;
}