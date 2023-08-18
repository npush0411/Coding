#include <iostream>

using namespace std;

int x = 10000;

int main()
{
    int x = 0;
    {
        int x = 10;
        {
            int x = 100;
            {
                int x = 1000;
                {
                    cout << "\nLocal : " << x << "\tGlobal : " << ::x;
                }
                cout << "\nLocal : " << x << "\tGlobal : " << ::x;
            }
            cout << "\nLocal : " << x << "\tGlobal : " << ::x;
        }
        cout << "\nLocal : " << x << "\tGlobal : " << ::x;
    }
    cout << "\nLocal : " << x << "\tGlobal : " << ::x;
    return 0;
}