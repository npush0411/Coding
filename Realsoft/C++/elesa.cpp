#include <algorithm>
#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int x[6] = {0, 78, 34, 33, 23, 66};int j;
    for(int i = 0, j = 0; i < 6; i++)
    {
        if(x[i] % 2 != 0)
        {
            swap(&x[j++], &x[i]);
        }
    }

    for(int i = 0; i < 6; i++)
        cout<< endl<< x[i];
}