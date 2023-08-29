#include <stdio.h>
#include <string.h>

int isRealString(char a[])
{
    int i = 0, cnt = 0;
    while(a[i] != '\0')
    {
        if(a[i] >= '0' && a[i] <= '9')
            i++;
        else    
            if(a[i] == '.')
            {
                i++;
                cnt++;
            }
            else
                break;
    }
    if(a[i] == '\0' && cnt != 0)
        return 1;
    else
        return 0;
}
int main()
{
    char p[50];
    printf("\nEnter String : ");
    scanf("%s", &p);
    if(isRealString(p))
        printf("\nReal String");
    else
        printf("\nNot-Real String");
}