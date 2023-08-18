#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << setw(5) << 123 << " " << setw(6) << setiosflags(ios::left) 
         << "Sujata" << resetiosflags(ios :: left) << " " << setw(6)
         << setprecision(2) << setfill('*') << 9.832 << endl;
    cout << setw(5) << 6 << " " << setw(15) << setiosflags(ios::left) 
         << "Narayan" << resetiosflags(ios :: left) << " " << setw(6)
         << setprecision(2) << setfill('#') << 123.83254;
}