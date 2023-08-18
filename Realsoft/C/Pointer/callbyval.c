#include <stdio.h>

int main()
{
    int x, y;
    void swap(int, int);
    printf("Enter No : ");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swap\n");
    printf("\nX : %d \t Y : %d", x, y);
    swap(x, y);
    printf("\nAfter Swap\n");
    printf("\nX : %d \t Y : %d", x, y);
    return 0;

}
void  swap(int a, int b)
{
    a += b;
    b = a - b;
    a -= b;
}