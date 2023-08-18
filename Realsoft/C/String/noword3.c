//No any fixed no of spaces
//For counting words
//if a[i] == 32 && a[i+1] != 32
#include <stdio.h>

int main()
{
    int i = 0, sc = 1;
    char a[50];
    printf("\nEnter No : ");
    gets(a);
    while(a[i] != '\0')
    {
        if(a[i] == 32 && a[i+1] != 32)
            sc++;
        i++;
    }
     printf("\nNo of words are %d", sc);
   
    return 0;
}