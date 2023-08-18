#include <iostream>

using namespace std;

int bin2dec(unsigned int binary, int pow = 0) 
{
    if (binary == 0) 
        return 0;
    else 
    {
        int ld = binary % 10;
        int dec = ld * (1 << pow);
        return dec + bin2dec(binary / 10, pow + 1);
    }
}

int main() 
{
    unsigned int b_no; int d_no;
    cout << "Enter Binary Number  : ";
    cin >> b_no;
    cout << endl << "Binary : " << b_no;
    d_no = bin2dec(b_no);
    cout << endl << "Decimal: " << d_no << endl;

    return 0;
}
