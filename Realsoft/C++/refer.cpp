#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int & y = x;
    cout << endl << x;
    cout << endl << y;
    y += 5;
    cout << endl << x;
    x -= 5;
    cout << endl << y;
}