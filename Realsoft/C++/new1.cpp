#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr = new int;
    cout << "\nEnter No : ";
    cin >> *ptr;
    cout << "\nNo : " << *ptr;
    *ptr += 5;
    cout << "\nNo : " << *ptr;
    delete ptr;
    return 0;
}