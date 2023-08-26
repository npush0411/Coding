/*
    Pushkar R Nashikkar
    Date : 12-02-2021
    Agenda -> Program to achive bubble sort
    Time Complexity -> O(n-square)
    Space Complexity best case -> 14 bytes
*/

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *arr, int n)
{
    int i, j, flg = 0;
    for(i = 0; i < n; i++, flg = 0)
    {
        for(j = 0; j < (n-1); j++)
        {
            if(*(arr + j) > *(arr + (j + 1)))
            {
                *(arr + j) = *(arr + j) + *(arr + (j + 1));
                *(arr + (j + 1)) = *(arr + j) - *(arr + (j + 1));
                *(arr + j) = *(arr + j) - *(arr + (j + 1));
                flg = 1;
            }
        }
        if(flg == 0)
            break;
    }
}

int main()
{
    int *arr, n, i;

    printf("\nEnter Size of Array : ");
    scanf("%d", &n);
    arr = (int *)malloc(n*sizeof(int));

    printf("\n--Data--");
    for(i = 0; i < n; i++)
    {
        printf("\nEnter %dth Data : ", i);
        scanf("%d", (arr + i));
    }

    printf("\n\nUnsorted Data\n");
    for(i = 0; i < n; i++)
        printf("%d\t", *(arr + i));

    bubble_sort(arr, n);

    printf("\n\nSorted Data\n");
    for(i = 0; i < n; i++)
        printf("%d\t", *(arr + i));

}