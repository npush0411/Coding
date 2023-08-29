#include <iostream>

using namespace std;

void display()
{
    cout << "\nWelcome\n";
}

void display(int n)
{
    cout << "\nWelcome " << n;
}

void display(double a)
{
    cout << "\nWelcome " << a;
}

int main()
{
    int n;
    double a;
    cout << "\nEnter Int : ";
    cin >> n;
    cout << "\nEnter Double : ";
    cin >> a;
    display();
    display(a);
    display(n);
    return 0;
}