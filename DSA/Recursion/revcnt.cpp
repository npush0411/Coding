#include <iostream>

using namespace std;

void cntrev(int n)
{

    if(n == 0)
        return;
//  If you want linear counting i.e. from 1 to n
//declare i globaly or get it by call & set it to 1;
//    cout<<"\t"<<i++;

    //recursive relation
    cntrev(n-1);    
    cout<<"\t"<<n;
    return;
}

int main()
{
    int n;
    cout<<"\nEnter Numbers from where you want to print reverse : ";
    cin>> n;
    cntrev(n);
    return 0;
}