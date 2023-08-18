#include <stdio.h>

//To check no. is odd or even
int oddeven(int no)
{
    return no%2;
}

//To display Table
void table(int no)
{
    int i = 1;
    printf("\nTable");
    while(i <= 10)
    {
        printf("%4d", no*i);
        i++;
    }
}

//To convert binary no. equivalent decimal no.
int bin2des(long int no)
{
    int dno = 0, mf = 1, dig;
    while(dno != 0)
    {
        dig = no%10;
        dno += (mf*dig);
        no /= 10;
    }
    return dno;
}

//To check for binary no
int isBinary(long int no)
{
    while(no != 0)

    {
        if(no%10 > 1)
            break;
        else
            no /= 10;
    }
    return (no == 0);
}

//To Check for prime no
int isPrime(int no)
{
    int i;
    for(i = 2; i <= no/2; i++)
        if(no%i == 0)
            break;
    return (i == ((no/2) + 1));
}

//To check for superPrime
int isSuperprime(int no)
{
    int i;
    if(isPrime(no))
    {
        while(no != 0)
        {
            if(no%10 != 2 || no%10 != 3 || no%10 != 5 || no%10 != 7)
                break;
            else
                no /= 10;
        }
        if(no == 0)
            return 2;
        else
            return 1;
    }    
    else
        return 0;
}

//Function to display character z
void printZ(int n)
{
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            if(i == 1 || i == n || i + j == n + 1)
                printf("*");
            else    
                printf(" ");
        printf("\n");
    }
    return ;
}

//Function to display charater N
void printN(int n)
{
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            if(j == 1 || j == n || i == j)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return ;
}

//Homework
//To return factorial of input
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

//To Generate reverse
int reverse(int no)
{
    int rev = 0;
    while(no != 0)
    {
        rev = rev*10 + no%10;
        no /= 10;
    }
    return rev;
}

//To compute digit sum of inputed no
int digSum(int no)
{
    int sum = 0;
    while(no != 0)
    {
        sum += no%10;
        no /= 10;
    }
    return sum;
}

//To compute digit count (length of no)
int lengthNo(int no)
{
    int len = 0;
    while(no != 0)
    {
        len++;
        no /= 10;
    }
    return len;
}
int palindrome(int no)
{
    return (no == reverse(no));
}
int armstrong(int no)
{
    int arm = 0, t = no;
    while(no != 0)
    {
        arm = arm + (no%10)*lengthNo(t);
        no /= 10;
    }
    return (arm == t);
}