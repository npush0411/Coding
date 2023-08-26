/*
    Pushkar R Nashikkar
    Date : 2-02-2021
    Agenda -> Program to achive Selection Sort
    TimeComplexity ->
*/
#include <stdio.h>
#include <stdlib.h>

int find_min(int *arr_start, int n)
{
    int i, min = *(arr_start);
    for(i = 0; i < n; i++)
        if(min < *(arr_start + i))
            min = *(arr_start + i);
    return min;
}

void selection_sort(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        
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

    selection_sort(arr, n);

    printf("\n\nSorted Data\n");
    for(i = 0; i < n; i++)
        printf("%d\t", *(arr + i));

}