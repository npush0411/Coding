#include <stdio.h>


int main()
{
    int x, y;
    void swap(int *a, int *b);
    printf("\nEnter Nos: ");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swap\nX : %d \tY : %d", x, y);
    swap(&x, &y);
    printf("\nAfter Swap\nX : %d \tY : %d", x, y);
    

}
void swap(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}