#include <stdio.h>

int main()
{
    int i = 0;
    char a[3];
    for(i = 0; i < 3; i++)
        scanf("%c", &a[i]);
    for(i = 0; i < 3; i++){
        printf("%c", a[i]);
    printf("\n");}
    return 0;
}