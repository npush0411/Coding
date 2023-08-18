#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main()
{
    int a, b;
    cout << "Enter two Numbers : ";
    cin >> a >> b;
    cout << endl << "Before Swap" << endl << "A : " << a << "   B : " << b;
    swap(&a, &b);
    cout << endl << endl << "After Swap" << endl << "A : " << a << "   B : " << b;
    return 0;
}