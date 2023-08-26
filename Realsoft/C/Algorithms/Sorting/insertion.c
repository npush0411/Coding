/*
    Pushkar R Nashikkar
    Date : 14-02-2021
    Agenda -> Program to achive insertion sort
    Time Complexity -> 
*/
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *arr, int n)
{
    int i, j, tmp;
    for(i = 1; i < n; i++)
    {
        tmp = *(arr + i);
        j = i - 1;
        while(*(arr + j) > tmp && j >= 0)
        {
            *(arr + (j + 1)) = *(arr + j);
            j--;
        }
        *(arr + (j + 1)) = tmp;
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

    insertion_sort(arr, n);

    printf("\n\nSorted Data\n");
    for(i = 0; i < n; i++)
        printf("%d\t", *(arr + i));
}