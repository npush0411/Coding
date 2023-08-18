#include <stdio.h>

int isvalid(char *pass)
{
    static int i, uc, sc;
    while(pass[i] != '\0')
    {
        if(pass[0] == '@' || pass[0] == '$' || pass[0] == '#')
            break;
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            uc++;
        else
            if(pass[i] == '#' || pass[i] == '@' || pass[i] == '$')
                sc++;
        i++;
    }
    if(uc != 0 && sc != 0 && pass[i] == '\0' && i >= 7)
        return 1;
    else
        return 0;
}

int main()
{
    char password[50];
    printf("\nEnter Password : ");
    gets(password);
    printf("\n %s", isvalid(password) ? "Valid Password" : "Not Valid Password");
    return 0;
}