#include <iostream>

using namespace std;

int main()
{
    int no, bin[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i = 0;
    cout<<"Enter Decimal no : ";
    cin>> no;
    while(no != 0)
    {
        bin[i] = no%2;
        no /= 2;
        i++;
    }
    cout<<endl;
    i -= 1;
    while(i >= 0)
    {
        cout<< bin[i--];
    }
    return 0;
}