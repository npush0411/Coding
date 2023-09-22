#include <stdio.h>

#define M 10

void input(int *a)
{
    int i = 0;
    for(i = 0; i < M; i++)
        scanf("%d", (a+i));
}

void display(int *a, int flg)
{
    int i;
    if(flg == 0)
        printf("\nBefore Sort\n");
    else
        printf("\nAfter Sorting\n");
    for(i = 0; i < M; i++)
        printf("\t%d", *(a+i));
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void pivote(int *a, int l, int r)
{
    if(a[l] > a[r])
        swap((a+l), (a+r));
}

int partition(int *a, int l, int r)
{
    int i = l, j = r, k;
    pivote(a, l, r);
    k = a[i]; //Pivote Element
    do
    {
        do i++; while(a[i] < k);
        do j++; while(a[j] > k);
        if(i < j)
            swap(a+i, a+j);
    }while(i < j);
    swap(a+l, a+j);
    return j;
}

void quick(int *a, int l, int r)
{
    int k;
    if(l < r)
    {
        k = partition(a, l, r);
        quick(a, l, k-1);
        quick(a, k+1, r);
    }
}

int main()
{
    int x[M];
    input(x);
    display(x, 0);
    quick(x, 0, M-1);
    display(x, 1);
}