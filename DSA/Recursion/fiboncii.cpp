#include <iostream>

using namespace std;

int nthfibno(int n)
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    return nthfibno(n-1) + nthfibno(n-2);
}

int main()
{
    int n;
    cin>> n;
    cout<<"\n "<<nthfibno(n);
    return 0;
}