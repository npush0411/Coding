//Use of Array as member of Class
#include <iostream>

using namespace std;

class Result
{
        int rno;
        int mrk[5];
    public:
        void setMarks();
        void setData();
        void setData(int);
        void display();
        int total();
        int avg() 
        {
            return total()/5;
        }
        int getNo() 
        {
            return rno;
        }
        int isMore(int n) 
        {
            return total() > n;
        }
        int isMore(Result &t) 
        { 
            return avg() > t.avg();
        }
        int isLess(int a) 
        { 
            return total() < a;
        }
        int isLess(Result &t) 
        { 
            return avg() < t.avg();
        }
};

void Result :: setMarks()
{
    cout << "\nEnter Marks\n";;
    for(int i = 0; i < 5; i++)
        cin >> mrk[i];
}

void Result :: setData()
{
    cout << "\nRoll No : ";
    cin >> rno;
    setMarks();
}

void Result :: setData(int n)
{
    rno = n;
    setMarks();
}

int Result :: total()
{
    int tot = mrk[0];
    for(int i = 1; i < 5; i++)
        tot += mrk[i];
    return tot;
}

void Result :: display()
{
    cout << "\nRoll No : " << rno << "\nMarks : ";
    for(int i = 0; i < 5; i++)
        cout << "\t" << mrk[i];
    cout << "\nTotal : " << total();
    cout << "\nAverage : " << avg();
}

int main()
{
    Result p, q;
    p.setData(6);
    q.setData(8);
    p.display();
    q.display();
    if(p.isMore(70))
        printf("\n > 70");
    else
        printf("\n < 70");
    if(p.isLess(q))
        cout << "\nP is Less";
    else
        cout << "\nQ is less";
    return 0;
}
