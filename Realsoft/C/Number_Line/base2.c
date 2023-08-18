//Please go through base1.c for better understanding
//the program sorts the input

#include <stdio.h>

void arrange(int *b, int *a)
{
    static int i, k, j = 11;
    

}

/*
    -1 10 -45 89 -55 -4 45 6 14 -8

    -55  -45  -8 -4  -1  0  6  10  14  45  89
*/

void input(int *a, int n)
{
    printf("\nEnter Data : ");
    while(n-- >= 0)
        scanf("%d", a++);
}

void display(int *a, int n)
{
    while(n-- >= 0)
    {
        printf("%4d\t", *a);
        a++;
    }
}

int main()
{
    static int a[10], b[11];

    input(a, 10);

    arrange(b, a);

    printf("\nSource\n");
    display(a, 10);

    printf("\nDestination\n");
    display(b, 11);     
    return 0;
}