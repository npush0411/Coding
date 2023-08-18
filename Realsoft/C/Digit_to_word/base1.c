#include <stdio.h>
void baseno(int n)
{
    switch (n)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
    }
}
int main()
{
    int n = 0, tmp;
    printf("\nEnter Number : ");
    scanf("%d", &n); tmp = n;
    printf("\n");
    if(n > 0 && n <= 9)
        baseno(n);
    
}