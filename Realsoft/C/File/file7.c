#include <stdio.h>

int main()
{
    FILE *fs;
    int no;
    char nm[50];
    float mrk;
    fs = fopen("slu.txt", "w");
    while(1)
    {
        printf("\nRoll No: ");
        scanf("%d", &no);
        if(no == 0)
            break;
        printf("\nName : ");
        scanf("%s", nm);
        printf("\nMarks: ");
        scanf("%f", &mrk);
        fprintf(fs, "%d %s %f\n", no, nm, mrk);
    }
    fclose(fs);
    return 0;
}