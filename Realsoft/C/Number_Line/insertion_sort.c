#include <stdio.h>

void insertion_sort(int *arr, int n)
{
    
}

void input(int *a, int n)
{
    printf("\nEnter Data : ");
    while(n-- >= 0)
        scanf("%d", a++);
}

//a function to display array elements
void display(int *a, int n)
{
    printf("\n");
    while(n-- >= 0)
    {
        printf("%4d\t", *a);
        a++;
    }
}

int main()
{
    int arr[10];
    input(arr, 10);
    display(arr, 10);
    insertion_sort(arr, 10);
    return 0;
}