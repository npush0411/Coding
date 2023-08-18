#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class sorting {
private:
    vector<int> numbers;

public:
    //Function to enter the data
    void enter_data() {
        cout << "Enter 5 numbers:" << endl;
        for (int i = 0; i < 5; ++i) {
            int num;
            cin >> num;
            numbers.push_back(num);
        }
    }
    //Function to display the numbers in sorted manner
    void display() {
        sort(numbers.begin(), numbers.end());

        cout << "Largest: " << numbers[4] << endl;
        cout << "Second Largest: " << numbers[3] << endl;
        cout << "Smallest: " << numbers[0] << endl;
        cout << "Second Smallest: " << numbers[1] << endl;
        cout << "Middle: " << numbers[2] << endl;
    } 
};

int main() {
    sorting analyzer;
    analyzer.enter_data();
    analyzer.display();

    return 0;
}
