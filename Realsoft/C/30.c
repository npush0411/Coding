#include <stdio.h>

int main()
{
    int x;
    printf("Enter No : ");
    scanf("%d", &x);
    printf((x >= 0 && x <= 100 ? "\nWitin 0 to 100" : "\nNot in Range"));    
    return 0;
}