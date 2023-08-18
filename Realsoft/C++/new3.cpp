#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr = new int[5];
    cout << "\nData\n";
    for(int i = 0; i < 5; i++)
        cin >> ptr[i];
    cout << endl << endl;
    for(int i = 0; i < 5; i++)
        cout << "\t" << ptr[i];
    return 0;
}