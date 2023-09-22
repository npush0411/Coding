#include <iostream>
#include "myTime.h"

using namespace std;

int main()
{
    myTime a(8, 30, 18);
    a.display();
    myTime b(10, 29);
    b.display();
    myTime c = a.add(b);
    c.display();
    if(a.isMore(b))
        a.display();
    else
        b.display();
}