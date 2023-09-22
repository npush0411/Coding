#include <iostream>

using namespace std;

#define N 5

class Array
{
        int x[N];
    public :
        Array();
        Array(int);
        Array(Array &);
        ~Array(){};
        //void setData();
        void display();
        int total();
        int getMax();
        int getMin();
        int isOrdered();
};

Array :: Array()
{
    /*for(int i = 0; i < N; i++)
        x[i] = 0;*/
    cout << "\n-- Enter Data --";
    for(int i = 0; i < 10; i++)
        cin >> x[i];
}

Array :: Array(int val)
{
    for(int i = 0;  i < 10; i++)
        x[i] = val;
}

Array :: Array(Array &t)
{
    for(int i = 0; i < 10; i++)
        x[i] = t.x[i];
}

/*void Array :: setData()
{
    cout << "\n-- Enter Data --";
    for(int i = 0; i < 10; i++)
        cin >> x[i];
}*/

void Array :: display()
{
    cout << "\nArray Data\n";
    for(int i = 0; i < 10; i++)
        cout << "\t" << x[i];
}

int Array :: total()
{
    int sum = 0;
    for(int i = 0; i < 10; i++)
        sum += x[i];
}

int main()
{
    int opt;
    while(1)
    {
        cout << "\n-- Array Menue --\n1. Initialize by Data\n2. Initialize by object\n3. display\n4. Total\n5. Get Max\n6. Get Min\n7. Check Order\n8. Exit\nOption : ";
        cin >> opt;
        if(opt > 7)
            break;
        switch(opt)
        {
            case 1:
                cout << "Enter Data : ";
                cin >> opt;
                Array k(opt);
                break;
            case 3:
                k.display();
                break;
            case 4:
                cout << "\nTotal : " << k.total();
                break;
            case 5:
                cout << "\nMax : " << k.getMax();
                break;
            case 6:
                cout << "\nMin : " << k.getMin();
                break;
        }
    }
}

/*
    Homework
        Findmax
        findmin
        check order (1/0)

*/