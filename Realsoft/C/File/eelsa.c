#include <stdio.h>

int main()
{
    int x[11];int i;
    x[10] = x[0];
    for(i = 0; i < 10; i++)
    {
        if(x[10] == x[i])
            ;
    }
}