/*
    Friend Function ->
            We have been emphasizing that the private members can't be accessed from outside the class.
        That is a non-member function can't have an access to the private data of a class. However, there could be
        a situation where we would like two classes to share a particular function. In such situations, C++ allows
        the common function to be made 'Friendly' with both the classes, Thereby allowying the function to have access
        to the private data of this classes. Such a Function need not be member of any of these classes. To make an
        outside function friendly to a class, We have to simply declare this function as a friend of the class as shown below -
                                class ABC
                                {
                                    private :
                                        ----------;
                                        ----------;
                                    public :
                                        ----------;
                                        friend void display(ABC &);
                                        ----------;
                                };
            The Function declaration should be preceded by the keyword "friend", The function is defined elsewhere in the program like
        a normal C++ Function. The function defination does not use either the keyword friend or the scop resolution operator. The
        Function that are declared with the keyword friend are known as friend functions. A Function can be declared as friend in any
        no of classes. A Friend function, although not a member funciton, has full access rights to the private members of the class

        => Charecteristics
            - It is not in the scope of the class to which it has been declared as friend
            - Since, it is not in scope of the class it can't be called using object of that class.
            - It can be invoked like a normal function without help of any object.
            -  Unlike member functions, it can't access member names directly, it has to use an object name and membership
                operator '.' with each member name
            - It can be declared either in public and the private part of the class without affecting its meaning
            - Usually it has object as an argument.
*/

#include <iostream>

using namespace std;

class Number
{
        int no;
    public :    
        void setData()
        {
            cout << "\nEnter No : ";
            cin >> no;
        }
        void display()
        {
            cout << "\nNo : " << no;
        }
        friend void update(Number &k, int val)
        {
            k.no += val;
        }
};   

int main()
{
    Number t;
    t.setData();
    t.display();
    update(t, 5);
    t.display();
}
