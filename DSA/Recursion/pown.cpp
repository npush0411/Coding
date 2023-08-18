/*
    Logic is Not Yet Corrected
    This is WRONG Program
*/
#include <iostream>
using namespace std;

int power(int n, int rev)
{
    if(rev == 0)
        return 1;
    rev--;
    return n*power(n, rev);
}
int reverse(int n)
{
    int rev = 0;
    while(n != 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    cout<<endl<< rev;
    return rev;
}

int main()
{
    int n;
    cin>> n;
    cout<<endl<< power(n, reverse(n));
    return 0;
}