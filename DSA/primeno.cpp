#include <iostream>

using namespace std;

int isPrime(int n)
{
    int i;
    for( i = 2; i <= n-1; i++)
        if((n%i) == 0)
            break;
    return (i == n);
}

int main()
{
    int mn;
    cout<<"Enter No : ";
    cin>> mn;
    cout<<endl<<(isPrime(mn) ? "Prime No" : "Not Prime");
    return 0;
}