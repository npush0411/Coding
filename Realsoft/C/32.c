#include <stdio.h>

int main()
{
    int no;
    printf("\nEnter No : ");
    scanf("%d", &no);
    printf((no >= 0 && no <= 100 ? "\nWithin Range" : ((no < 0) ? "\nBelow Zero" : "\nAbove 100")));
    return 0;
}