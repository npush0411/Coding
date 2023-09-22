#include<iostream>
#include"bug.h"
using namespace std;

int main()
{
    Book *p;
    p= new Book;
    p->setData(6,"let us c",600);
    p->display();
    p->setData(6,"let us c");
    p->display();
    delete p;
}