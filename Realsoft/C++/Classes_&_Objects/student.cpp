#include <iostream>
#include <string.h>
using namespace std;

class student
{
        int no;
        char nm[15];
        double mrk;
    public:
        student()
        {
            no = 0;
            mrk = 0.0;
            nm[0] = '\0';
        }
        student(int a, char *b, double c)
        {
            no = a;
            strcpy(nm, b);
            mrk = c;
        }
        student(student &t)
        {
            no = t.no;
            strcpy(t.nm, nm);
            mrk = t.mrk;
        }
        ~student(){}
        int getno(){return no;}
        int getmarks(){return mrk;}
        void setData(int a)
        {
            no = a;
            cout << "\nName : ";
            cin >> nm;
            cout << "\nMarks : ";
            cin >> mrk;
        }
        void display()
        {
            cout << "\nRoll No : " << no << "\nName : " << nm << "\nMarks : " << mrk;
        }
};

void main1()
{
    student a;
    a.setData(101);
    a.display();
    student b;
    student *c;
    c = &b;
    c->setData(102);
    c->display();
    student *d = new student();
    d->setData(103);
    d->display();
    delete d;
}

void main2()
{
    student e[4];
    int i = 0;
    while(i < 4)
    {
        e[i].setData(i+1);
        i++;
    }
    for(i = 0; i < 4; i++)
        e[i].display();

    student *f = new student[5];
    for(i = 0; i < 5; i++)
        (f+i)->setData(i+1);
    for(i = 0; i < 5; i++)
        (*(f+i)).display();
    delete []f;

}

int main()
{
    main1();
    main2();
}
