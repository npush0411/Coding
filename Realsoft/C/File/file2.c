//Program to read text file
#include <stdio.h>

int main()
{
    
    FILE *f1;
    char ch;
    f1 = fopen("city.txt", "r");
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
        printf("\nText\n");
        while(1)
        {    
            ch = fgetc(f1);
            if(feof(f1))
                break;
            printf("%c", ch);
        }
    }
   fclose(f1);
   return 0;
}