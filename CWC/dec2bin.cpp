#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,b;
    cin>>n;
    vector<int> v;
    while(n!=0){
        b=n%2;
        v.push_back(b);
        n=n/2;
    }
    reverse(v.begin(),v.end());
    for(auto &i:v){
        cout<<i;
    }
    return 0;
}