#include <stdio.h>

int isIP(char ip[])
{
    int i = 0, cnt = 0, dcnt = 0, no = 0;
    while(ip[i] != '\0')
    {
        if(ip[i] == '.')
        {
            cnt++;
            if(cnt > 3 || no > 255)
                break;
            no = 0;
        }
        else
        {
            if(ip[i] == '0' && ip[i] <= '9')
                no = no*10 + (ip[i] - 48);
            else
                break;
        }
        i++;
    }
    return (ip[i] == '\0' && cnt == 3);
}

int main()
{
    char ip[50];
    printf("Enter String : ");
    scanf("%s", &ip);
    if(isIP(ip))
        printf("\nValid IP");
    else
        printf("\nInvalid IP");
}
//Valid E-mail ID
//Valid PIN