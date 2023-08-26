//Bug solving file
//Simply testing environment
#include <iostream>

using namespace std;

void display()
{
    cout<<"\n welcome:";
}

void display(int a)
{
    cout<<"\n welcome:"<<a;
}

void display(double d)
{
    cout<<"\n welcome:"<<d;
}

int main()
{
    display();
    display(10);
    display('A');
    display(9.8f);
    return 0;
}