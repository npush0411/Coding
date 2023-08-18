#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fs;
    int no, sno, flg = 0;
    char nm[50];
    float mrk;
    fs = fopen("slu.txt", "r");
    if(fs == NULL)
        return 0;
    printf("\nRoll No to Search : ");
    scanf("%d", &sno);
    while(1)
    {
        fscanf(fs, "%d %s %f", &no, nm, &mrk);
        if(feof(fs))
            break;
        if(no == sno)
            flg = 1;
    }
    if(flg) 
        printf("\nFound");
    else
        printf("\nNot Found");
    return 0;
}
