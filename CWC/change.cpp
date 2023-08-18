#include <iostream>


using namespace std;

int main()
{
    int n,i;
    cin>>n;
    cin>>i;

   cout<< (n ^ (1<<i));   //1111=15   1010  1000
    return 0;
}