#include <iostream>

using namespace std;

inline void display()
{
    cout << "\nWelcome\n";
}

inline int square(int  n)
{
    return (n*n);
}

inline int cube(int n)
{
    return square(n)*n;
}

int main()
{
    int n;
    display();
    cout << "\nEnter no : ";
    cin >> n;
    cout << "\nSquare : " << square(n);
    cout << "\nCube : " << cube(n);
    return 0;
}