#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, c, t;
	cin>> t;
	while(t--)
	{
	    cin>> a>> b>> c;
	    cout<< endl;
		if(a > b)
			if(a  > c)
				if(c > b)
					cout<< endl << c;
				
				else
					cout<< endl<< b;
			else	
				cout<< endl << a;
		else
			if(b > c)
				if(c > a)
					cout<< endl << c;
				else
					cout<< endl << a;
			else
				cout<< endl << b;

	}
	return 0;
}
