#include <iostream>

using namespace std;

int main()
{
    int i, arr[5], pc, zc, nc;
    pc = zc = nc = 0;
    cout<<"Enter 5 Elements: ";
    for(i = 0; i < 5; i++)
    {
        cin>> arr[i];
        if(arr[i] < 0)
            nc++;
        else
            if(arr[i] == 0)
                zc++;
            else    
                pc++;
    }
    cout<<"\nNo of +ve "<< pc<< " -ve "<< nc<< " 0s "<< zc;
    return 0;
}