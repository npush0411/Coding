#include <stdio.h>
#include <stdlib.h>

int * allocate(int n)
{
    int *a;
    a = (int *)malloc(n*sizeof(int));
    //int *ptr = (int *);
    return a;
}
void input(int *b, int n)
{
    int i = 0;
    printf("\nData :");
    while(i <= n)
    {
        scanf("%d", b);
        b++;
        i++;
    }
}
void display(int *b, int n)
{
    int i = 0; 
    printf("\nData\n");
    for(i = 0; i < n; i++)
        printf("%4d", b[i+1]);
}
int main()
{
    int n, i = 0;
    int *ptr;
    //clrscr();
    printf("\nInformation Count : ");
    scanf("%d", &n);
    ptr = allocate(n);
    input(ptr, n);
    display(ptr, n);
    free(ptr);
    return 0;
}