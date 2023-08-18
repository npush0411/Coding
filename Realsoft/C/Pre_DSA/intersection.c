#include <stdio.h>

void input(int *a, int n)
{
    int i = 0;
    while(i < n)
    {
        scanf("%d", &a[i]);
        if(i > 0)
            if(a[i-1] > a[i])
            {   
                printf("\nInput Accepted only in ascending order\n");
                continue;
            }
        i++;
    }
}
int binary_search(int *a1, int *a2)
{

}