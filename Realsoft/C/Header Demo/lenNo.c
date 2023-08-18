#include <stdio.h>
#include "myFunction.h"

int main()
{
    int no;
    printf("\nEnter No : ");
    scanf("%d", &no);
    printf("\nLength Of No (No of Digits): %d", lengthNo(no));
}