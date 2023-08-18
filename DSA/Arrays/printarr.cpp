#include <iostream>

using namespace std;

int main()
{
    int i, arr[5];
    cout<<"Enter 5 elements : ";
    for (i = 0; i < 5; i++)
        cin>> arr[i];
    cout<<endl;
    for (i = 0; i < 5; i++)
        cout<< arr[i]<< " ";
    return 0;        
}