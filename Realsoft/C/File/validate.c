#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;int i = 0, flg_user, flg_pass;
    char credential[50];
    fp = fopen("Credential.txt", "r");
    printf("\nEnter Username : ");
    scanf("%s", credential);
    while(1)
    {
        ch = fgetc(fp);
        if(ch != credential[i++])
            break;
        if(ch == '*')
            break;
    }
    if(ch == '*')
        flg_user = 1;
    else
        flg_user = 0;
    printf("\nEnter Password : ");
    scanf("%s", credential);
    while(1)
    {
        ch = fgetc(fp);
        if(ch != credential[i++])
            break;
        if(ch == '*')
            break;
    }
    if(ch == '*')
        flg_pass = 1;
    else
        flg_pass = 0;
    fclose(fp);
    if(flg_pass != 0 && flg_user != 0)
        printf("\nVald User\n");
    else
        printf("\nInvalid Inputs\n");
    return 0;
}