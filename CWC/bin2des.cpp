#include <iostream>


using namespace std;

int bin2dec(int bin, int  pow = 0)
{
    int ld = bin % 10;
    int des = ld * (1 << pow);
    return des + bin2dec(bin/10, pow + 1);
}

int main()
{   int bin;
    cout << "Enter Binary : ";
    cin >> bin;
    cout << endl << bin;
    cout << endl << "Decimal : " << bin2dec(bin);
    return 0;
}