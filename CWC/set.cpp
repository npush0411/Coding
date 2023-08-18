#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;

    cout<< (n | (1<<i));  //8=1000  1100
    return 0;
}