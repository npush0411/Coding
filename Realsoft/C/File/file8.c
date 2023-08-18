#include <stdio.h>

int main()
{
    FILE *fs;
    int no;
    char nm[50];
    float mrk;
    fs = fopen("slu.txt", "r");
    if(fs == NULL)
        return 00;
    while(1)
    {
        fscanf(fs, "%d %s %f", &no, nm, &mrk);
        if(feof(fs))
            break;
        printf("\n%d %s %f", no, nm, mrk);
    }
    fclose(fs);
    return 0;
}