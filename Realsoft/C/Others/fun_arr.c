//Function call by passing arrays
#include <stdio.h>

int main()
{
    int x[5], i = 0;
    void display(int [], int);
    printf("\nData : \n");
    for(i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    display(x, 5);
    return 0;
}
void display(int y[], int n)
{
    int i = 0;
    printf("\nData : ");
    for(i = 0; i < 5; i++)
        printf("%4d", y[i]);
    return ;
}