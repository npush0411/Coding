#include <stdio.h>
#include "myFunction.h"

int main()
{
    long int no; 
    printf("\nEnter binary No : ");
    scanf("%ld", &no);
    printf("\nDecimal No : %d", bin2des(no));
    return 0;
}