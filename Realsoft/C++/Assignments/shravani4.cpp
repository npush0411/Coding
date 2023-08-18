# include <iostream>

using namespace std;

class student
{
		int rollNumber;
		string name;
		double marks[3];
	public:
		void Setstudent(); //Asking to Enter Data
		void getrollNumber(); //To enter Roll No
		void getName(); // To enter name
		void getmarks(); //to enter marks
		float Average(); //to compute & return average
		char grade(); //to return grade obtained
};

//Function to display Data enter message
void student :: Setstudent()
{
	cout<<"\nEnter Data\n";
	  
}

//Asking to enter the PRN number
void student :: getrollNumber()
{
	cout<<"\nEnter roll No : ";
	cin>>rollNumber;
}

//Function asking to enter the name 
void student :: getName()
{
	cout<<"\nEnter name : ";
	cin>>name;
}


//Function asking to enter marks of asked no. of students
void student :: getmarks()
{
    cout<<"Enter marks of 3 subjets:";
    for (int i = 0; i < 3; i++)
    	cin>>marks[i];
}


//To compute Average
float student :: Average()
{
  int sum = 0;
  for(int i = 0; i < 3; i++)
  	sum += marks[i];
  return (sum/3);
}

//To display grade
char student :: grade()
{
	int avg = Average();
	if(avg >= 90)
		return 'A'; 
	else 
		if(avg >= 80 && avg <= 89)
			return 'B';
	else 
		if(avg >= 70 && avg <= 79)
			return 'C';
	else 
		if(avg >= 60 && avg <= 69)
		return 'D';
	else 
		if(avg>=50 && avg<=59)
			return 'E';
		else
			return 'F';
}

int main()
{
	int n;
	cout<<"\nEnter no of students:";
	cin >> n;
    student *stu = new student[n];
	for (int i=0;i<n;i++)
	{
		stu[i].Setstudent();
		stu[i].getrollNumber();
		stu[i].getName();
		stu[i].getmarks();
		cout<<"\n\nAverage marks of student: "<<stu[i].Average();
		cout<<"\n\nGrade of student: "<<stu[i].grade();
	}
}
