#include <stdio.h>
#include <stdlib.h>
#include "slist.h"

//Version 3
//Linked List as a Data Type

int main()  
{
    SLIST p;
    int opt, d;
    init(&p);
    while(1)
    {
        printf("\nMenue\n1. Add at END\n2. Add at Begin\n3. Count Nodes\n4. Sum\n5. Display All\n6. Display odd data\n7. Display Even Data\n8. Del Last\n9. Del First\n10. Del All\n11. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 10)
            break;
        switch (opt)
        {
            case 1:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addE(&p, d); break;
            case 2:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addB(&p, d); break;
            case 3:
                printf("\nCount : %d", count(&p)); break;
            case 4:
                printf("\nSum : %d", sum(&p)); break;
            case 5: 
                display(&p); break;
            case 6:
                oddnode(&p); break;
            case 7:
                evennode(&p); break;
            case 8:
                dellast(&p); break;
            case 9:
                delFirst(&p); break;
            case 10:
                delall(&p); break;
        }

    }
    return 0;
}
