#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "\nEnter No : ";
    cin >> n;
    for(i = 2; i < n; i++)
        if(n%i == 0)
            break;
    if(i == n)
        cout << "\nPrime No";
    else
        cout << "\nNot Prime"; 
    return 0;
}