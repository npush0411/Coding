#include <stdio.h>
#include "book.h"

int main()
{
    struct book *a;
    int i = 0, n = sizeof(struct book);
    a = (struct book *)malloc(n * 5);
    while(i < 5)
    {
        input(a + i);
        i++;
    }
    for(i = 0; i < 5; i++)
        display(*(a + i));
    free(a);
    return 0;
}