//Program to find max data pos from array of 10 ints
#include <iostream>

using namespace std;

int main()
{
    int arr[10], pos = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "\nEnter Data : ";
        cin >> arr[i];
        if(arr[pos] < arr[i])
            pos = i;
    }
    cout << "\nMax No : " << arr[pos] << "\nMax Data Pos: " << pos;
    return 0;
}