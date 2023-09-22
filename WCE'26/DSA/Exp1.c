/*
    Name : Pushkar R Nashikkar
    Class : SY B.Tech Electronics
    PRN : 22410074   Batch : EN3
*/

//C Program to Compute Factorial of inputed Number
#include <stdio.h>

int fact_rec(int n)
{
    if(n == 1)
        return 1;
    return n * fact_rec(n - 1);
}

int fact_it(int n)
{
    int fact = n;
    while(--n)
        fact *= n;
    return fact;
}

int main()
{
    int n;
    printf("\nEnter No : ");
    scanf("%d", &n);
    printf("\nFactorial By Recursive Method : %d", fact_rec(n));
    printf("\nFactorial By Iterative Method : %d", fact_it(n));
    return 0;
}
