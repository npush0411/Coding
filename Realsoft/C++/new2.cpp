#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr = new int(10);
    cout << "\nNo : " << *ptr;
    *ptr += 5;
    cout << "\nNo : " << *ptr;
    delete ptr;
    return 0;
}