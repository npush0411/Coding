#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f;
    char str[100];
    f = fopen("Result.c", "w");
    printf("\nEnter Code line by line\nEnter 'stop' indicating end");
    while(1)
    {
        gets(str);
        if(strcmp(str, "stop") == 0) break;
        fputs(str, f);
        fputs("\n", f);
    }
    fclose(f);
    return 0;

}