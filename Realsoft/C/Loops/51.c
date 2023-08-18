#include <stdio.h>

int main()
{
    int i = 0, no;
    printf("\nEnter No : ");
    scanf("%d", &no);
    while(no != 0)
    {
        no /= 10;
        i++;
    }
    printf("\nLength : %d", i);
}