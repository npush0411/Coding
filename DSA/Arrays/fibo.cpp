#include <iostream>

using namespace std;

int main()
{
    int arr[100], i, n;
    cout<<"Enter no of terms to display ";
    cin>> n;
    cout<<endl;
    arr[0] = 0;
    arr[1] = 1;
    cout<< arr[0]<<" "<< arr[1]<< " ";
    for(i = 2; i < n; ++i);
        arr[i] = arr[i - 1] + arr[i - 2];
    for(i = 0; i < n; i++)
        cout<< arr[i]<< " ";
    return 0;
}