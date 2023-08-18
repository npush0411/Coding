//Program to search city name from file
//Logical - > Error
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1;
    char s[40], t[40]; int flg = 0;
    f1 = fopen("city.txt", "r");
    if(f1 == NULL){
        printf("\nFile Not Found ");
        return 0;
    }
    printf("\nEnter City Name to Search : ");
    gets(t);
    while(1)
    {
        fgets(s, 39, f1);
        if(feof(f1))
            break;
        else
            if(strcmp(s, t) == 0)
            {
                flg = 1; break;
            }
    }
    if(flg)
        printf("\nFound");
    else
        printf("\nNot Found");
    fclose(f1);
    return 0;
    return 0;
}