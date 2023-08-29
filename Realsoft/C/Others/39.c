#include <stdio.h>

int main()
{
    int val;
    printf("\nEnter No: ");
    scanf("%d", &val);
    if(val >= 0 && val <= 100)
        printf("\nWithin range 0-100");
    else
        printf("\nOutside Range 0-100");
    return 0;
}