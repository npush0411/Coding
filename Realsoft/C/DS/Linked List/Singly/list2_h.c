#include <stdio.h>
#include "list2.h"

int main()
{
    int opt, d;
    NODE *st = NULL;
    while(1)
    {
        printf("\nMenue\n1. Add at END\n2. Add at Begin\n3. Count Nodes\n4. Sum\n5. Display\n6. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 5)
            break;
        switch (opt)
        {
            case 1:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addE(d, &st); break;
            case 2:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addB(d, &st); break;
            case 3:
                printf("\nCount : %d", count(&st)); break;
            case 4:
                printf("\nSum : %d", sum(&st)); break;
            case 5: 
                display(&st); break;
        }
    }
    return 0;
}
