#include <iostream>

using namespace std;

int main()
{
    void repli(char ch = '*', int n = 5);
    repli();
    repli('A');
    repli('#', 3);
    return 0;
}

void repli(char ch, int n)
{
    cout<<"\nOutput\n";
    for(int i = 0; i < n; i++)
        cout<<ch;
}