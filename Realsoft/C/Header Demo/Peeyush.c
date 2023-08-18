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
//Function to check input is palindrom or not
int palindrome(int no)
{
    return (no == reverse(no));
}
//function to check input is armstrong or not
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