#include <iostream>

using namespace std;
/*
    1111
    1011
    1011

*/

int main()
{
    int n, i;
    
    cout << "Enter No : ";
    cin >> n;
    
    cout << endl <<"Enter Position : ";
    cin >> i;

    cout << endl << "Bit before change " << ((n & (1 << i)) >> i);

    n = n & (~(1 << i));
    
    cout << endl << "Bit After change " << ((n & (1 << i)) >> i) << endl << "New No : " << n;
    return 0;
}