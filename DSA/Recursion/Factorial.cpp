#include <iostream>
using namespace std;

int factorial(int n)
{
    //Base Case
    if(n == 0)
        return 1; //in base case return 1 is madatory
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>> n;
    cout<<endl<<"Factorial of "<< n<<" is "<< factorial(n);
    return 0;
}