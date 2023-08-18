#include <stdio.h>

int factorial(int no)
{
    int fact = 1;
    while(no != 0)
    {
        fact *= no;
        no--;
    }
    return fact;
}

int main()
{
    int no;
    printf("Enter No : ");
    scanf("%d", &no);
    printf("\nThe Factorial of No. : %d", factorial(no));
    return 0;
}