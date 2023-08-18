#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    
    if (n <= 0)
        return false;

    while (n % 2 == 0)
        n /= 2;

    return n == 1;
}

int Main_main()
{
        int n;
        cin  >> n;
        cout << n;
}

int main() {
    int n;
     cout << "Enter a n: ";
     cin >> n;
    
    if (isPowerOfTwo(n))
         cout << n << " is a power of 2." <<  endl;
    else
         cout << n << " is not a power of 2." <<  endl;
    
    return 0;
}
