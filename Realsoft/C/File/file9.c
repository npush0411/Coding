#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fs;
    int no, sno, flg = 0;
    char nm[50], pass[50];
    float mrk;
    fs = fopen("cred.txt", "r");
    if(fs == NULL)
        return 0;
    printf("\nRoll No to Search : ");
    scanf("%d", &sno);
    while(1)
    {
        fscanf(fs, "%d %s", &no, nm);
        if(feof(fs))
            break;
        if(no == sno)
            flg = 1;
        printf("\nEnter Password : ");
        scanf("%s", pass);
        if(strcmp(nm, pass))
            printf("\nValid");
        else
            printf("\nNot Valid");
    }
    if(flg) 
        printf("\nFound");
    else
        printf("\nNot Found");
    return 0;
}