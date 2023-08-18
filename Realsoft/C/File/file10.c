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
    f1 = fopen("result.dat", "wb"); //Wb stands for binary file writing mode
    while(1)
    {
        printf("\nRoll No : ");
        scanf("%d", &no);
        if(no == 0)
            break;
        input(&p, no);
        fwrite(&p, sizeof(RES), 1, f1);
        /*
            Writes binary file to the file
        */

    }fclose(f1);
    return 0;
}