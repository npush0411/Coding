#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
private:
    int emp_id;
    string name;
    string address;
    string designation;
    vector<double> salaries;
    double avg_sal, tot = 0;

public:
    void enterData() {
        cout << "\nEnter EmpID: ";
        cin >> emp_id;
        cin.ignore(); //To clear \n character which will be treated as string for name

        cout << "\nEnter Name: ";
        getline(cin, name);

        cout << "\nEnter Address: ";
        getline(cin, address);

        cout << "\nEnter Designation: ";
        getline(cin, designation);

        for (int year = 1; year <= 5; ++year) {
            double salary;
            cout << "Enter Salary for Year " << year << ": ";
            cin >> salary;
            tot += salary;
            salaries.push_back(salary);
        }
        avg_sal = tot / salaries.size();
    }

    //Function to display information
    void displayInfo() const {
        cout << "EmpID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salaries for the last five years:" << endl;
        int year = 1;
        for (double salary : salaries) {
            cout << "Year " << year++ << ": $" << salary << endl;
        }
        cout << "Average Salary: Rs. " << avg_sal << endl;
        cout << endl;
    }
};

int main() {
    vector<Employee> employees;

    for (int i = 0; i < 5; ++i) {
        Employee employee;
        employee.enterData();
        employees.push_back(employee);
    }

    for (Employee &employee : employees) {
        employee.displayInfo();
    }

    return 0;
}
