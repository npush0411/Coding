#include <stdio.h>

//function for actual processing of data
void arrange(int *b, int *a)
{
    int k = 0, i = 0, j = 11;
    while(k < 11)
    {
        if(a[k] < 0) //if found to be positive inserted in right half
        {
            b[i] = a[k];
            i++;
        }
        else
            if(a[k] > 0) //If found negative inserting into left half
            {
                b[j] = a[k];
                j--;
            }
        k++;
    }
}

//functions to take input n elements
void input(int *a, int n)
{
    printf("\nEnter Data : ");
    while(n-- >= 0)
        scanf("%d", a++);
}

//a function to display array elements
void display(int *a, int n)
{
    while(n-- >= 0)
    {
        printf("%4d\t", *a);
        a++;
    }
}

//calling program
int main()
{
    static int a[10], b[11];//static for initializing all elements with 0
    //to take input
    input(a, 10);
    //To arrange the inputs as per requirement
    arrange(b, a);
    //printing source
    printf("\nSource\n");
    display(a, 10);
    //printing the destination to which we have marked changes
    printf("\nDestination\n");
    display(b, 11);     
    return 0;
}