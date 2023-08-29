/*
    isDesString ( 0 - 9)
    isBinString ( 0 / 1)
    isRelSreing ( min 1 dig precision)
*/
#include <stdio.h>
#include <string.h>

int isDesString(char des[])
{
    int i = 0;
    while (des[i] != '\0')
    {
        if((des[i] == '0' || des[i] == '1') == 0)
            break;
        i++;
    }
    if(des[i] == '\0')
        return 1;
    else
        return 0;
}

int main()
{
    char des[50];
    gets(des);
    if(isDesString(des))
        printf("\nBinary String !!");
    else
        printf("\nNot - Binary String !!");
    return 0;
}
