#include <iostream>
#include <string.h>
using namespace std;

class Book
{
        int bno;
        char bnm[50];
        int bprice;
    public:
        void setData()
        {
            cout << "\nEnter Book No : ";
            cin >> bno;
            cout << "\nEnter Book Name : ";
            cin >> bnm;
            cin.ignore();
            cout << "\nEnter Book Price : ";
            cin >> bprice;
        }
        void setData(int a)
        {
            bno = a;
            cout << "\nEnter Book Name : ";
            cin >> bnm;
            cin.ignore();
            cout << "\nEnter Book Price : ";
            cin >> bprice;
        }
        void setData(int a, char *b)
        {
            bno = a;
            strcpy(bnm, b);
            cout << "\nEnter Book Price : ";
            cin >> bprice;
        }
        void setData(char *b)
        {
            strcpy(bnm, b);
            cout << "\nEnter Book No : ";
            cin >> bno;
            cout << "\nEnter Book Price : ";
            cin >> bprice;
        }
        void setData(int a, char *b, int c)
        {
            bno = a;
            strcpy(bnm, b);
            bprice = c;
        }
        int getbno(){return bno;}
        int getbprice(){return bprice;}
        void display()
        {
            cout << "\nBook No : " << bno << "\nBook Name : " << bnm << "\nBook Price : $" << bprice;
        }
};