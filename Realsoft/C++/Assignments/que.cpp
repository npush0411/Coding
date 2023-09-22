#include <iostream>

using namespace std;

class Queue
{
    private :
        int *arr;
        int n, fr, rr;
    public :
        Queue()
        {
            cout << "\nEnter Size of stack : ";
            cin >> n;
            arr = new int[n];
            fr = 0;
            rr = -1;
        }
        void push(int d)
        {
            arr[++rr] = d;
        }
        ~Queue()
        {
            delete [] arr;
        }
};