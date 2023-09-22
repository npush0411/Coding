#include <iostream>

using namespace std;
/*
    Operator Overloading	->
    ----------------------------
        This is one of the exciting feature of C++. It is an important technique that has enhanced the power of extensibility of the C++. C++ tries to make the user defined datatype behave in much the same way as the built in types. For instance C++ permits us to add two variables of user defined types with the same syntax that is applied to the basic types. This means that C++ has the ability to provide the operators with a special meaning for a data type. the mechanism of giving such special meanings to an operator is known as operator overloading. 
        Operator Overloading prpvides a flexible option for the creation of new definations for most of the C++ operators. We can overload all the C++ operators except the following 

    - class member access operators
    - '.'
    - '.*'
    - Scope Resolution Operator
    - '::'
    - Size of operators
    - 'sizeof()'
    - Conditional Operator
    - ?  :
        
    The smentix of an operator cn be extended. we can't change its syntax gramatical rules that covers such as no of operands, precedence and associavity.

    Defining Operator overloading.
        To define additional task of an operator, we must specify what it means in relations to class to which operator is applied. This is done with the help of special function called operator function which describes the task. Following is the general form of operator function

    <return-type> <class-name> :: operator <opr> ([<argument>]);
    {
    -------
    -------
    -------
    }
        where return type is type of value returned by the specified operation and <opr> is the operator being overloaded. Operator opr 
        these functions must be either member functions or friend functions. A basic difference between them is that a friend function will have only one argument for unary operators and 2 for binary operators, while a member function has no arguments for unary operators and only one for binary operators. This is because the object used to invoke the member function is passed implicitely and therefore is available for the member function. This is not the case with friend functions. the arguments may be passed either by value or by referance.
        The process of overloading involves following steps 
    1. Create a class that defines the data type that is tobe used in the overloading operation.
    2. Declare the operator function Operator <opr> (); in the public part of the class, it maybe either a member function or a friend function.
    3. Define the operator function to implement, the required operations. 
*/

class Number
{
        int no;
    public :
        Number ()
        {
            no = 0;
        }
        Number(int a)
        {
            no = a;
        }
        Number(Number&a)
        {
            no = a.no;
        }
        ~Number(){}
        void display()
        {
            cout << "\nNo : " << no;
        }
        void setData()
        {
            cout << "\nNo : ";
            cin >> no;
        }
        Number operator + (int a)
        {
            Number t(no + a);
            return t;
        }
        Number operator + (Number &a)
        {
            Number t(no + a.no);
            return t;
        }
        Number operator - (Number &a)
        {
            Number t(no - a.no);
            return t;
        }
        Number operator - (int a)
        {
            Number t(no - a);
            return t;
        }
        friend Number operator + (int a, Number &b)
        {
            Number t(a + b.no);
            return t;
        }
        friend Number operator - (int a, Number &b)
        {
            Number t(a - b.no);
            return t;
        }
        int operator > (int a)
        {
            return (no > a);
        }
        int operator < (int a)
        {
            return (no < a);
        }
        int operator == (int a)
        {
            return no == a;
        }
        int operator > (Number &a)
        {
            return (no > a.no);
        }
        int operator < (Number &a)
        {
            return (no < a.no);
        }
        int operator == (Number &a)
        {
            return no == a.no;
        }
        Number operator += (int a)
        {
            no += a;
            return *this;
        }
        Number operator -=(int a)
        {
            no -= a;
            return *this;
        }
        Number operator ++() //pre-increment
        {
            Number t(++no);
            return t;
        }
        Number operator --()
        {
            Number t(--no);
            return t;
        }
        Number operator ++(int) //Post Increament
        {
            Number t(no++);
            return t;
        }
};



int main()
{
    Number p(7), q, r;
    p.display();
    q = p + 3;
    q.display();
    r = p + q;
    r.display();
    p += 3;
    p.display();
    q = ++p;
    p.display();
    q.display();
}