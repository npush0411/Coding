#include <iostream>
using namespace std;
class employee
{
    int EMPid;
    string name;
    string designation;

    public:
    double salary;
    void getinfo();
    void displayinfo();


};
float netsalary(double a,double b,double c,double d,double e )
{
     float avg;
   avg=(a+b+c+d+e)/5;
   return avg;
}

void employee ::getinfo()
{
    cout<<"\nEnter id of employee:";
    cin>>EMPid;
    cout<<"\nEnter name of employee:";
    cin>>name;
    cout<<"\nEnter designation of employee:";
    cin>>designation;
    cout<<"\nEnter salary of employee:";
    cin>>salary;
}
void employee ::displayinfo()
{
    cout<<"\n*Employee_Name*";
    cout<<"\nEmployee Name:"<<name;
    cout<<"\nEmployee salary:"<<salary;
    cout<<"\nEmployee designation:"<<designation;
    cout<<"\n\n";
}    

int main()
{
  employee emp1;
  emp1.getinfo();
  emp1.displayinfo();

  employee emp2;
 emp2.getinfo();
 emp2.displayinfo();

  employee emp3;
 emp3.getinfo();
 emp3.displayinfo();

  employee emp4;
 emp4.getinfo();
 emp4.displayinfo();

  employee emp5;
 emp5.getinfo();
 emp5.displayinfo();

 cout<<"\nAverage salary of Employees:"<<netsalary(emp1.salary,emp2.salary,emp3.salary,emp4.salary,emp5.salary);

}