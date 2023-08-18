#include <iostream>
#include <deque>

/*
    Double end delete and insert
*/
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
  /*  for(int i: d){
        cout<< i<<" ";
    }
    d.pop_front();
    cout<<endl;
    for(int i: d){
        cout<< i<<" ";
    }*/
   /* cout<<"Print first index element "<< d.front()<< endl;
    cout<<"Print Last index element "<< d.back()<< endl;
*/  cout<< endl<<"Empty or Not -> "<< d.empty();
    
    return 0;
}
