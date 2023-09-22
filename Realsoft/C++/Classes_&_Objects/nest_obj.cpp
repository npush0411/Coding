//nesting of objects
#include<iostream>
#include"myarray.h"

using namespace std;

class Result
{
        int rno;
        Array mrk;
    public:
        Result()
        {
            rno = 0;
        }
        ~Result(){}
        void setdata()
        {
            cout << "\nRoll no.";
            cin >> rno;
            mrk.setData();
        }
        void display()
        {
            cout << "\nRoll No." << rno;
            mrk.display();
            cout << "\nTotal:" << mrk.total();
            cout<<"\nAverage:"<<mrk.avg();
        }
        int getNo()
        {
            return rno;
        }
        int getTotal()
        {
            mrk.total();
        }

        int getAvg()
        {
            return mrk.avg();
        }

        //1:roll no.wise 2:totalwise 3:avgwise

        int compare(Result & t,int flg)
        {
            int res=0;
            switch(flg)
            {
                case 1: //roll no.wise
                    res = rno-t.rno;
                break;

                case 2:
                    res = getTotal() - t.getTotal();
                    break;

                case 3:
                    res = getAvg() - t.getAvg();
                    break;
            }
            return res;
        }

        int isMore(Result & t,int flg)
        {
            
            int res = 0;
            switch(flg)
            {
                case 1: //roll no.wise
                    res = rno > t.rno;
                    break;
                case 2:
                    res = getTotal() > t.getTotal();
                    break;
                case 3:
                    res = getAvg() > t.getAvg();
                    break;
            }
            return res;
        }

        int isLess(Result & t,int flg)
        {
            
            int res = 0;
            switch(flg)
            {
                case 1: //roll no.wise
                    res = rno < t.rno;
                    break;
                case 2:
                    res = getTotal() < t.getTotal();
                    break;
                case 3:
                    res = getAvg() < t.getAvg();
                    break;
            }
            return res;
        }
};

int main()
{ 
    Result a[5],tmp;

    int i = 0, j = 0, pos = 0;
    for(i = 0; i < 5; i++)
        a[i].setdata();

    cout<<"\nBefore sorting:\n";

    for(i = 0; i < 5; i++)
        a[i].display();

    for(i = 0; i < 4; i++)
    {
        pos = i;
        for(j = i + 1; j < 5; j++)
        {
            if(a[j].isLess(a[pos], 1))
             pos = j;
        }
        if(i != pos)
        {
            tmp = a[j];
            a[j] = a[pos];
            a[pos] = tmp;
        }
    }

    cout<<"\nAfter sorting:\n";
    for(i = 0; i < 5; i++)
        a[i].display();
    return 0;

}