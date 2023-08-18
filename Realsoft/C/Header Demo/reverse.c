#include <stdio.h>

int reverse()
{
    int no, rev = 0;
    printf("Enter No : ");
    scanf("%d", &no);
    while(no != 0)
    {
        rev = rev*10 + no%10;
        no /= 10;
    }
    return rev;
}

int main()
{
    printf("\nReverse of Entered No is : %d", reverse());
    return 0;
}