#include <stdio.h>

int main()
{
    char a[50];
    int i = 0, uc = 0, lc = 0, oc = 0;
    printf("\nEnter a String : ");
    gets(a);
    while(a[i] != '\0')
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            uc++;
        else
            if(a[i] >= 'a' && a[i] <= 'z')
                lc++;
            else
                oc++;
        i++;
    }
    printf("\nUppercase : %d\tLowercase : %d\tOther : %d", uc, lc, oc);
    return 0;
}
