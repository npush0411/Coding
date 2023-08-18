/*
    Program to copy source file abc.txt with new file pqr.txt
*/
//Program to read text file
#include <stdio.h>

int main()
{
    
    FILE *f1, *f2;
    char ch;
    f1 = fopen("abc.txt", "r");
    /*
        The function call fopen searches for the file 'abc.txt' on the disk
        If file founds then reads it and loads it into memory
        Possible Operations - Reading existing contains to the file
            If File not found call returns NULL indicating file open failed.
    */
   if(f1 == NULL)
    printf("\nFILE NOT FOUND\n");
    else
    {
        f2 = fopen("pqr.txt", "w");
        while(1)
        {    
            ch = fgetc(f1);
            if(feof(f1))
                break;
            fputc(ch, f2);
        }
    }
   fclose(f1);   fclose(f2);
   return 0;
}