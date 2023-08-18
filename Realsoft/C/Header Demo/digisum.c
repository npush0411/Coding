#include <stdio.h>

int digiSum()
{
    int no, res = 0;
    printf("Enter No : ");
    scanf("%d", &no);
    while(no != 0)
    {
        res += no%10;
        no /= 10;
    }
    return res;
}

int main()
{
    printf("\nDigit Sum : %d", digiSum());
    return 0;
}