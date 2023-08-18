#include <iostream>

using namespace std;

void reachHome(int src, int dist)
{
    cout<<"Src : "<< src<<" distination : "<< dist<<endl;
    if(src == dist)
    {
        cout<< endl<< "Reached Home\n";
        return;
    }
    src++;
    reachHome(src, dist);
    return;
}

int main()
{
    int src, dist;
    cin>> src>> dist;
    reachHome(src, dist);
    return 0;
}