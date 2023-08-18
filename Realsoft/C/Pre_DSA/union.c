#include <stdio.h>

void Union(int *a, int *b, int *c)
{
    static int i, j, k;
    while(1)
    {
        for(; j < 5; j++)
            if(i < 5)
                if(a[i] <= b[j])
                {
                    c[k++] = a[i];
                    break;
                }
                else
                    c[k++] = b[j];
            else
                c[k++] = b[j];
        if(j > 4)
            c[k++] = a[i];
        if(k > 9)
            break;
        i++;
    }
}
void input(int *b, int n)
{
    int i = 0;
   while(i < 5)
    {
        scanf("%d", &b[i]);
        if(i > 0)
            if(b[i] < b[i-1])
            {
                printf("\nInput in Ascending Order\n");
                continue;
            }
        i++;
    }
}
int main(){
    int a[5], b[5], c[10];
    static int i, j, k;
    printf("\nEnter Array 1 : ");
    input(a, 5);
    printf("\nEnter Array 2 : ");
    input(b, 5);
    Union(a, b, c);
    printf("\nMerged Sorted array\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", c[i]);
}
