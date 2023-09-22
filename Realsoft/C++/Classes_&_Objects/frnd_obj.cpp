//Member Function of Class A is friend to class B
#include <iostream>

using namespace std;

class B;

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
        void swap(B &);
};

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
        friend void A :: swap(B &);
};

void A :: swap(B &t)
{
    int temp;
    temp = t.y;
    t.y = x;
    x = temp;
}

int main()
{
    A p; B q;
    p.set();
    q.set();
    p.display();
    q.display();
    p.swap(q);
    p.display();
    q.display();
}