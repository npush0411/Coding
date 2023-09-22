#include "myTime.h"
class employee
{
        int eno;
        char enm[50];
        myTime ewt;
        int esph;
    public :
        employee()
        {
            eno = esph = 0;
            enm[0] = '\0';
        }
        ~employee(){}
        void setData()
        {
            cout << "\nEmp No : "; cin >> eno;
            cout << "\nEmp name : "; cin >> enm;
            cout << "\nWork Data : "; ewt.setTime();
            cout << "\nSalary Per Hour : "; cin >> esph;
        }
        void display()
        {
            cout << "\nEmp Data\n" << eno << "\nName : " << enm << "\nWork Details : " << ewt.display();
            cout << "\nSalary Per Hour : " << esph;
        }
        int calSalary()
        {
            int h;
            if(ewt.getmin() > 30)
                h = ewt.gethr() + 1;
            else
                h = ewt.gethr();
            return h*esph;
        }
        int getno(){return eno;}
        int getesph(){return esph;}

};

int main()
{
    employee a;
    a.setData();
    a.display();
    cout << "\nTotal\n" << a.calSalary();
}