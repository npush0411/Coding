//Program to compute sum of 10 inputs
#include <iostream>

using namespace std;

int main()
{
    int a, tot = 0;
    for(int i = 0; i < 10; i++)
    {
        cout<<"\nEnter Data : ";
        cin >> a;
        tot += a;
    }
    cout<<"\nSum : "<<tot;
    return 0;
}