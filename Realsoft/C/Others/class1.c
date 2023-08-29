#include <stdio.h>
#include <string.h>

/*
    functions find  out first occurence q inside p
    if not n=found returns NULL
*/

int main()
{
    char p[100]; int i = 0, cnt = 0, dcnt = 0;
    char q[] = ".com";
    printf("\nE-mail : ");
    scanf("%s", &p);
    if(strstr(p, q) == NULL)
        printf("\nInvalid");
    else    
        while(p[i] != '@')
        {
            if((p[i] == '_' || p[i] == '.') || (p[i] >= 48 && p[i] <= 57) || (p[i] >= 65 && p[i] <= 90) || (p[i] <= 97 && p[i] <= 122))
                ;
            else
                break;
            i++;
        }
    if(p[i] == '@')
        printf("\nValid");
    else
        printf("\nInvalid");
}