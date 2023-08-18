#include <stdio.h>
#include "book.h"

int main()
{
    struct book a[5];
    int i = 0;
    while(i < 5)
    {
        input(a + i);
        i++;
    }
    for(i = 0; i < 5; i++)
        display(*(a + i));
    return 0;
}
