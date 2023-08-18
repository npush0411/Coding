//Program to compute sum and avg of 10 inputs (Array)
#include <iostream>

using namespace std;

int main()
{
    int x[10], sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "\nEnter Data : ";
        cin >> x[i];
        sum += x[i];
    }
    cout << "\nSum : " << sum << "\tAvg : " << (sum/10);
    return 0;
}