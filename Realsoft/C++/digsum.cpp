#include <iostream>

using namespace std;

int main()
{
    int sum, n;
    cout<<"Enter No : ";
    cin>> n;
    while(n != 0)
    {
        sum += n%10;
        n /= 10;
    }
    cout<<"\nDig Sum : "<< sum;
    return 0;
}