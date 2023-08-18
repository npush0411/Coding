#include <iostream>

using namespace std;

bool lin_ser(int arr[],int size, int key)
{
    if(size == 0)
        return false;
    if(key == arr[0])
        return true;
    else
        return lin_ser(arr + 1, size - 1, key);
}
int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>> size;
    int arr[size], key;
    cout << "Enter 5 Integers :";
    for (int i = 0; i < size; i++)
        cin>> arr[i];
    cout<<"\nEnter Element to search: ";
    cin>>key;
    if (lin_ser(arr, size, key))
        cout<<"\nFound"<<endl;
    else    
        cout<<"\nNot Found";    
    return 0;
}