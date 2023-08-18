#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class convert {
public:
    static string DecimalToBinary(int decimal);
    static int BinaryToDecimal(const  string& binary);
    static string DecimalToOctal(int decimal);
    static int OctalToDecimal(const  string& octal);
    static string DecimalToHexadecimal(int decimal);
    static int HexadecimalToDecimal(const  string& hexadecimal);
};

string convert::DecimalToBinary(int decimal) {
     string binary = "";
    while (decimal > 0) {
        binary =  to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

//Function to convert binary to decimal
int convert::BinaryToDecimal(const  string& binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--, power++) 
        if (binary[i] == '1') 
            decimal += pow(2, power);
    return decimal;
}

//Function to convert decimal no to octal
 string convert::DecimalToOctal(int decimal) {
     string octal = "";
    while (decimal > 0) {
        octal =  to_string(decimal % 8) + octal;
        decimal /= 8;
    }
    return octal;
}

//Function to convert Octal to decimal
int convert::OctalToDecimal(const  string& octal) {
    int decimal = 0;
    int power = 0;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * pow(8, power);
        power++;
    }
    return decimal;
}

//Decimal to hex-decimal
 string convert::DecimalToHexadecimal(int decimal) {
     string hexadecimal = "";
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal =  to_string(remainder) + hexadecimal;
        } else {
            hexadecimal = char('A' + remainder - 10) + hexadecimal;
        }
        decimal /= 16;
    }
    return hexadecimal;
}

//Function to convert Hex to decimal
int convert::HexadecimalToDecimal(const  string& hexadecimal) {
    int decimal = 0;
    int power = 0;
    for (int i = hexadecimal.length() - 1; i >= 0; i--) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal += (hexadecimal[i] - '0') * pow(16, power);
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal += (hexadecimal[i] - 'A' + 10) * pow(16, power);
        }
        power++;
    }
    return decimal;
}

int main() {
    int choice;
    convert convert;
    string binary, octal, hexadecimal;
    while(1)
    {
         cout << "Menu:\n";
         cout << "1. Binary to Octal\n";
         cout << "2. Octal to Binary\n";
         cout << "3. Binary to Hexadecimal\n";
         cout << "4. Hexadecimal to Binary\n";
         cout << "5. Octal to Hexadecimal\n";
         cout << "6. Hexadecimal to Octal\n";
         cout << "7. Exit\n";
         cout << "Enter your choice: ";
         cin >> choice;
         if(choice > 6)
            break;
        switch(choice) {
            case 1: 
                  
                 cout << "\nEnter binary number: ";
                 cin >> binary;
                 cout << "\nOctal equivalent: " << convert.DecimalToOctal(convert.BinaryToDecimal(binary)) <<  endl;
                break;
            case 2: 
                 cout << "\nEnter octal number: ";
                 cin >> octal;
                 cout << "\nBinary equivalent: " << convert.DecimalToBinary(convert.OctalToDecimal(octal)) <<  endl;
                break;
            case 3:
                 cout << "\nEnter binary number: ";
                 cin >> binary;
                 cout << "\nHexadecimal equivalent: " << convert.DecimalToHexadecimal(convert.BinaryToDecimal(binary)) <<  endl;
                break;
            case 4: 
                 cout << "\nEnter hexadecimal number: ";
                 cin >> hexadecimal;
                 cout << "\nBinary equivalent: " << convert.DecimalToBinary(convert.HexadecimalToDecimal(hexadecimal)) <<  endl;
                 break;
            case 5: 
                 cout << "\nEnter octal number: ";
                 cin >> octal;
                 cout << "\nHexadecimal equivalent: " << convert.DecimalToHexadecimal(convert.OctalToDecimal(octal)) <<  endl;
                 break;
            case 6:
                 cout << "\nEnter hexadecimal number: ";
                 cin >> hexadecimal;
                 cout << "\nOctal equivalent: " << convert.DecimalToOctal(convert.HexadecimalToDecimal(hexadecimal)) <<  endl;
        }
    }

    return 0;
}
