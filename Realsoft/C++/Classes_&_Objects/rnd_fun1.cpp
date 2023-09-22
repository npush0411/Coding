//Regular Function friend for both classes
#include <iostream>

using namespace std;

class B;

class A
{
        int x;
    public :
        void set()
        {
            cout << "\nx : ";
            cin >> x;
        }
        void display()
        {
            cout << "\nx : " << x;
        }
        friend void swap(A &, B &);
};

class B
{
        int y;
    public :
        void set()
        {
            cout << "\nEnter No : ";
            cin >> y;
        }
        void dispay()
        {
            cout << "\ny : " << y;
        }
        friend void swap(A &, B &);
};

void swap(A &k, B &t)
{
    int val = k.x;
    k.x = t.y;
    t.y = val;
}

int main()
{
    A p;
    B q;
    p.set();
    q.set();
    p.display();
    q.dispay();
    swap(p, q);
    p.display();
    q.dispay();
}