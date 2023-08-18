#include <stdio.h>
#include <stdlib.h>
#include "list1.h"

int main()
{
    int opt, d;
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
                addE(d); break;
            case 2:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addB(d); break;
            case 3:
                printf("\nCount : %d", count()); break;
            case 4:
                printf("\nSum : %d", sum()); break;
            case 5: 
                display(); break;
        }
    }
    return 0;
}