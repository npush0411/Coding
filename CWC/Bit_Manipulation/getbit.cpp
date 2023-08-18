#include <iostream>

using namespace std;

/*
    1111
    1000

    1000
*/

int getbit(int n, int i)
{
    return (n & (1 << i)) >> i;
}

int main()
{
    int n, i;
    cout << "Enter No : ";
    cin >> n;
    cout << endl << "Enter Position  : ";
    cin >> i;
    cout << endl << i << " bit in " << n << " is " << getbit(n, i);
    return 0;
}