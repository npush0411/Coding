#include <stdio.h>

int main()
{
    int x;
    printf("Enter No : ");
    scanf("%d", &x);
    printf("\n No is %s", ((x == 0) ? "Zero" : ((x < 0) ? "Negative" : "Positive")));
    return 0;
}