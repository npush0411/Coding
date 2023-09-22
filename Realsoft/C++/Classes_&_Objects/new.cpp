#include <iostream>

using namespace std;

class A;

class B
{
        int y;
    public :
        void set()
        {
            cout << "\n Y : ";
            cin>> y;
        }
        void display()
        {
            cout << "\nY : " << y;
        }
        void swap(A &);
};

class A
{
        int x;
    public:
        void set()
        {
            cout << "\nX : ";
            cin >> x;
        }
        void display()
        {
            cout << "\nX : " << x;
        }
        friend void B :: swap(A &);
};

void B :: swap(A &t)
{
    int temp;
    temp = t.x;
    t.x = y;
    y = temp;
}


int main()
{
    A p; B q;
    p.set();
    q.set();
    p.display();
    q.display();
    q.swap(p);
    p.display();
    q.display();
}