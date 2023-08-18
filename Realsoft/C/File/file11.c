/*
    A)  Header File Creation
        Result.h
    b ) Creat  new file to store RES file record to binary file result.dat
        typedef struct result
        {
            int no;
            int mrk[5];
        }RES;
        void input (RES *t, int no)
        {
            int i = 0;
            pr
    
        }
*/

#include <stdio.h>
#include "Result.h"
int main()
{
    FILE *f1;
    RES p;
    int no;
    f1 = fopen("result.dat", "rb"); //Wb stands for binary file writing mode
    if(f1 == NULL)
        printf("\nFile Not Found !!");
    while(1)
    {
        fread(&p, sizeof(RES), 1, f1);
        if(feof(f1))
            break;
        display(&p);
    }
    fclose(f1);
    return 0;
}