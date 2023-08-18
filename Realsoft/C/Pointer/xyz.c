#include <stdio.h>
#include <string.h>

void reverse(char *str, int n)
{
    int i = 0, t = n;char a;
    while(i < n)
    {
        a = str[n];
        str[n] = str[i];
        str[i] = a;
        i++; n--;
    }
    str[t] = '\0';
}


int main()
{
    int t, n;
    char str[500];
    scanf("%d", &t);
//    ptr = (char *)malloc((n+1)*sizeof(char));
    while(t)
    {
        scanf("%d", &n);
        gets(str);
        n = strlen(str)+1;
        reverse(str, n);
        puts(str);
        t--;
    }
    return 0;
}