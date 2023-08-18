#include <stdio.h>

int main()
{
    FILE *fs;
    int no;
    char nm[50];
    float mrk;
    fs = fopen("cred.txt", "w");
    while(1)
    {
        printf("\nID: ");
        scanf("%d", &no);
        if(no == 0)
            break;
        printf("\nPassword : ");
        scanf("%s", nm);
        fprintf(fs, "%d %s\n", no, nm);
    }
    fclose(fs);
    return 0;
}