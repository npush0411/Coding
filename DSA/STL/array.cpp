#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4}; //static array || can't be dynamic
    int size = a.size();
    for(int i = 0; i< size; i++)
    {
        cout<< a[i]<< endl;
    }
    cout<<"Element at 2nd Index -> "<<a.at(2)<<endl;
    cout<<"Empty or Not -> "<< a.empty()<<endl;
    cout<<"First Element -> "<< a.front()<<endl;
    cout<<"Last element ->"<< a.back()<<endl;
    return 0;
}