#include <iostream>
#include <vector>

using namespace std;
//Capacity -> memory assigned for how many variables
//Size -> How many elements are there in vector
//When we use clear operation size becomes 0 capacity is retained
int main()
{

    vector<int> v;
    //declare and initialise vector of size 5 and initialize all 5 elements with 1
    vector<int> a(5, 1); //here vector initializes with size 5 and elements as 1
    //Size 
    cout<<"Capacity -> "<< v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity -> "<< v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity -> "<< v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity -> "<< v.capacity()<<endl;

    cout<<"2nd Element -> "<< v.at(2)<<endl;
    cout<<"Front -> "<<v.front()<<endl;
    cout<<"Before Pop Back -> "<<v.back()<< endl;
    v.pop_back();
    return 0;
}
/*
    #include <iostream> 
    #include <vector>
    using namespace syd;

    int main()
    {
        vector<int> v;
        
    }
*/