#include <stdio.h>

int main()
{
    FILE *f1;
    char ch;
    f1 = fopen("abc.txt", "w");
    /*
        The function call fopen searches for the file 'abc.txt' on the disk
        If file founds then reads it and loads it into memory
        Possible Operations - Writing contains to the file
            If File not found it creats a new file and allows writing to the file.
    */
   printf("\nType characters\n");
   while(1)
   {
        scanf("%c", &ch);
        if(ch == '*')
            break;
        fputc(ch, f1); //writes ch to the file f1
   }
   fclose(f1);
   return 0;
}
