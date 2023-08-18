#include <stdio.h>

int main()
{
    char a[50];
    int i = 0, sp = 0, ep = 0, maxpos = 0, max = 0;
    printf("\nEnter String : ");
    gets(a);
    while(1)
    {
        if(a[i] == 32 || a[i] == '\0')
        {
            ep = i - 1;
            if(max < (ep - (sp + 1)))
            {
                max = (ep - (sp + 1));
                maxpos = sp;
            }
            if (a[i] == '\0')
                break;            
            sp = i + 1;
        }
        i++;
    }
    printf("\nLength : %d", max);
    return 0;
}