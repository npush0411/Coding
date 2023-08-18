#include <stdio.h>

int main()
{
    FILE *fp;
    int i = 0;
    char ch;
    fp = fopen("Credential.txt", "w");
    printf("\nEnter Credentials \n * indicates end of username/password");
    printf("\nEnter Username : ");
    while(1)
    {
        scanf("%c", &ch);
        fputc(ch, fp);
        if(ch == '*')
            break;
    }
    printf("\nEnter Password : ");
    while(1)
    {
        scanf("%c", &ch);
        fputc(ch, fp);
        if(ch == '*')
            break;
    }
    fclose(fp);
}