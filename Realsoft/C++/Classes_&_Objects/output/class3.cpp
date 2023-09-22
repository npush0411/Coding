/*
    # Function Polymorphism and Overloading
    # class Object as argument to the function
    # Functions returning class Objects
    # Use of 'THIS' pointer 
*/
#include <iostream>

using namespace std;

class Num
{
        int a, b;
    public :
        void setData()
        {
            cout << "\nValue For A : ";
            cin >> a;
            cout << "\nValue For B : ";
            cin >> b;
        }
        void setData(int a, int b)
        {
            this -> a = a;
            this -> b = b;
        }
        void setData(int x)
        {
            a = b = x;
        }
        void setData(Num &t)
        {
            a = t.a;
            b = t.b;
        }
        void display()
        {
            cout << "\nA : " << a << "\tB : " << b;
        }
        int getA() { return a; }
        int getB() { return b; }
        void swap()
        {
            int c = a;
            a = b;
            b = c;
        }
        Num add(Num &k)
        {
            Num t;
            t.setData(a+k.a, b+k.b);
            return t;
        }
        Num Sub(Num &k)
        {
            Num t;
            t.setData(a-k.a, b-k.b);
            return t;
        }
};

int main()
{
    Num p, q, r;
    p.setData();
    int x = p.getA() + 3;
    int y = p.getB() + 4;
    q.setData(y, x);
    p.display();
    q.display();
    q.swap();
    q.display();
    r = p.add(q);
    r.display();
    r = p.Sub(q);
    r.display();
    return 0;
}

/*
    This Pointer '->'
        C++ Uses a unique called 'this'To   represent an Object that invokes
        a member function. This is pointer that points to a object for which this function was called
        The starting address is same as, the address of the furst variable in the class structure.
        This unique pointer is automatically passed to a member function when it is called. The pointer 'this' acts as an
        implicite argument to all the member functions.
*/
