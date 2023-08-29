#include <iostream>

using namespace std;

void repli(char ch = '*', int n = 5)
{
    cout<<"\nOutput\n";
    for(int i = 0; i < n; i++)
        cout<<ch;
}

int main()
{
    repli();
    repli('A');
    repli('#', 3);
}