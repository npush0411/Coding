#include<iostream>
#include<string.h>
using namespace std;

class Book
{
    int bno;
    char bnm[20];
    int bprice;


public:
   void setData(int a,char *b,int c)
   {
    bno=a;
    strcpy(bnm,b);
    bprice=c;
   }

void setData(int a,char *b)
{
    bno=a;
    strcpy(bnm,b);
    cout<<"\n book price:";
    cin>>bprice;
}

void setData(int a)
{
    bno=a;
    cout<<"\n name:";
    cin>>bnm;
    cout<<"\n price:";
    cin>>bprice;
}

void setData()
{
    cout<<"\n book no:";
    cin>>bno;
    cout<<"\n name:";
    cin>>bnm;
    cout<<"\n price:";
    cin>>bprice;
}

int getNo() {return bno;}
int getPrice() {return bprice;}
char *getName() {return bnm;}

void display()
{
    cout<<"\n bookdata \n no: "<<bno<<"\n name:"<<bnm<<"\n price:"<<bprice;
}
};