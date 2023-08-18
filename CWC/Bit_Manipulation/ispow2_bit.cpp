#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // If n is 0, it is not a power of 2.
    if (n == 0) 
        return false;
        
    // If n has more than one bit set, it is not a power of 2.
    while (n > 1) 
    {
        if (n & 1) 
            return false;
        n >>= 1;
    }

  // n is a power of 2.
  return true;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isPowerOfTwo(n)) {
    cout << n << " is a power of 2." << endl;
  } else {
    cout << n << " is not a power of 2." << endl;
  }

  return 0;
}
