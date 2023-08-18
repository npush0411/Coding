#include <stdio.h>

int main()
{
    char a[50];
    int i = 0, sp = 0, ep = 0;
    printf("\nEnter String : ");
    gets(a);
    while(1)
    {
        if(a[i] == 32 || a[i] == '\0')
        {
            ep = i - 1;
            printf("\nLength : %d", (ep - (sp + 1)));
            if (a[i] == '\0')
                break;            
            sp = i + 1;
        }
        i++;
    }
    return 0;
}