#include <iostream>

using namespace std;

class Num
{
        int x, y;
    public :
        Num()
        {
            x = y = 0;
            cout <<"\nDefault Constructor\n";
        }
        Num(int a)
        {
            x = y = a;
        }
        Num(int a, int b)
        {
            x = a; y = b;
            cout << "\nParameterized Constructor\n";
        }
        Num(Num &t)
        {
            x = t.x; y = t.y;
            cout << "\nCopy Constructor\n";
        }
        ~Num()
        {
            cout << "\nInside Destructor\n";
        }
        void setData()
        {
            cout << "\nX : "; cin >> x;
            cout << "\nY : "; cin >> y;
        }
        void setData(int a)
        {
            x = y = a;
        }
        void setData(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        void setData(Num &t)
        {
            x = t.x; y = t.y;
        }
        void display()
        {
            cout << "\nx : " << x << "\nY : " << y;
        }
        int getX(){return x;}
        int getY(){return y;}
        Num add(Num &t)
        {
            Num k(x + t.x, y + t.y);
            return k;
        }
        Num Sub(Num &t)
        {
            Num k(x - t.x, y - t.y);
            return k;
        }
};

int main()
{
    Num p;
    p.display();
    Num q(8);
    q.display();
    {
        Num r(2, 4);
        r.display();
    }
    q.setData();
    p.setData();
    p.display();
    q.display();
    Num r;
    r = p.add(q);
    r.display();
}