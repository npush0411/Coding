//Program to compute max from 10 inputs
#include <iostream>

using namespace std;

int main()
{
    int x, max = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "\nEnter Data : ";
        cin >> x;
        if(max < x)
            max = x;
    }
    cout << "\nMax : " << max;
    return 0;
}