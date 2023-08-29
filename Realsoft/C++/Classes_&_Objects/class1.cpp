#include <iostream>

using namespace std;

class Student
{
    private:
        int no;
        char nm[50];
    public :
        void setData()
        {
            cout << "\nRoll No : ";
            cin >> no;
            cout << "\nEnter Name : ";
            cin >> nm;
        }
        void display()
        {
            cout << "\nRoll No : " << no << "\nName : " << nm;
        }
};

int main()
{
    Student p, q;
    p.setData();
    q.setData();
    p.display();
    q.display();
}