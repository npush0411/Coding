#include <iostream>

using namespace std;

void printarr(int arr[], int size)
{
    cout<<"\n";
    for(int i = 0; i < size; i++)
        cout<< arr[i]<<" ";
}
bool binary_ser(int arr[], int s, int e, int key)
{
    
    static int mid = (e+s)/2; 
    if(s > e)
        return false;
    if(arr[mid] == key)
        return true;
    else
        if(key > arr[mid])
            return binary_ser(arr, mid + 1, e, key);
        else    
            return binary_ser(arr, s, mid - 1, key);     
}
int main()
{
    int size;
    cout<<"\nEnter Size of the array";
    cin>> size;
    int arr[size], key;
    cout<<"\nEnter elements of array";
    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
        if (i == 0)
            continue;
        else    
            if (arr[i] < arr[i-1])
            {
                cout<<"Invalid Input";
                i--;
            }
    }
    printarr(arr, size);
    cout<<"\nEnter Key to search : ";
    cin>> key;
    if(binary_ser(arr, 0, size, key))
        cout<<"\nFound";
    else
        cout<<"\nNot Found";
    return 0;
}