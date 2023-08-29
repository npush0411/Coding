#include <iostream>
#include "book.h"
using namespace std;

//Part B
int main()
{   
    Book b;
    b.setData();
    b.display();
}

/*
//Part C
int main()
    Book p, *q;
    q = &p;
    q->setData();
    q->display();
}


//Part D
int main()
{   
    Book p[5]; int i = 0;
    while(i < 5)
    {
        p[i].setData(i+1);
        i++;
    }
    for(i = 0; i < 5; i++)
        p[i].display();
    return 0;
}

//Part E
int main()
{
    Book *p = new Book();
    p->setData(6, "Let's C++", 600);
    p->display();
    p->setData(6, "Let's C++");
    p->display();
    delete p;
    return 0;
}

//Part F
int main()
{
    Book *p = new Book[5];
    int i = 0;
    while(i < 5)
    {
        (p + i)->setData(i+1);
        i++;
    }
    for(i = 0; i < 5; i++)
        (*(p + i)).display();
    delete [] p;
    return 0;
}
*/