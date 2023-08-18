#include <iostream>

using namespace std;

int arrSum(int arr[], int size)
{
    if(size ==  2) //When array has only two elements we will rerurn the sum of them
        return arr[0] + arr[1]; //as we are always triming the array by size 1.
        //when array has only 2 elements then still there will be only 
    return arr[0] + arrSum(arr + 1, size - 1);
}

int main()
{
    int arr[10]; 
    int size = 10;
    cout<<"Enter 10 Elements :";
    for (int i = 0; i < 10; i++)
        cin>> arr[i];    
    cout<<"\nArray Sum is "<< arrSum(arr, size);
    return 0;
}
