//Program to read line by line records from line
#include <stdio.h>

int main()
{
    FILE *f1;
    char s[80];
    f1 = fopen("city.txt", "r");
    if(f1 == NULL)
    {
        printf("\nFile Not found");
        return 0;
    }
    printf("\nCity List \n\n");
    while(1)
    {
        fgets(s, 79, f1);
        if(feof(f1))
            break;
        puts(s);
    }
    fclose(f1);
    return 0;
}