//12 - 5 -23

/*  
    1.  int fputs(char *s, FILE *f)
            Library Function writes a line of characters to the file. Not Null  
    2.  char * fgets(char *dest, int n, FILE *f);
            reads a line from the specified stream and stores it to the stream pointed by dest.S
    3. 
*/
//Creat a text file containing records line by line
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1;
    char s[80];
    f1 = fopen("city.txt", "w");
    printf("\nEnter City names : ");
    //gets(s);
    while(1)
    {
        gets(s);
        if( strcmp(s, "stop") == 0)
            break;
        fputs(s, f1);
        fputs("\n", f1);
    }
    fclose(f1);
    return 0;
}