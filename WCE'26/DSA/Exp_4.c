#include <stdio.h>

//using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int arr[10], i, j, flg = 0;
    printf("\nEnter Data  : ");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    printf("\nData Before Sort\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", arr[i]);

    for(i = 0; i < 10; i++)
    {
        flg = 0;
        for(j = 1; j < 10; j++)
        {
            if(arr[j] > arr[j-1])
            {
                swap((arr + j), (arr+(j-1)));
                flg = 1;
            }
        }
        if(flg == 0)
            break;
    }

    printf("\nData After Sort\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", arr[i]);
}
