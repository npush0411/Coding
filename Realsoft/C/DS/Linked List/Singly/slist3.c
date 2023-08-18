#include <stdio.h>
#include "slist2.h"

int main()
{
    int opt;
    SLIST p, q, r;
    init(&p);
    init(&q);
    init(&r);
    while(1)
    {
        printf("\nMenue\n1. Creat List 1\n2. CreatList 2\n3. Display 1\n4. Display 2\n5. Display 3\n6. Delete 1\n7. Delete 2\n8. Delete 3\n9. Sort 1\n10. Sort 2\n11. Merge\n12. CopyList 1 - 3\n13. Copy List 2 - 3\n14. Append\n15. Uninon\n16. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 15)
            break;
        switch (opt)
        {
            case 1:
                creatList(&p); break;
            case 2:
                creatList(&q); break;
            case 3:
                display(&p); break;
            case 4:
                display(&q); break;
            case 5:
                display(&r); break;
            case 6:
                delall(&p); break;
            case 7:
                delall(&q); break;
            case 8:
                delall(&r); break;
            case 9:
                sort(&p); break;
            case 10:
                sort(&q); break;
            case 11:
                r = merge(&p, &q);
                break;
                
            case 12:    
                copyList(&r, &p);   break;
            case 13:
                copyList(&r, &q); break;
            case 14:
                appendList(&p, &q);  break;
            case 15:
                r = unionList(&p, &q);  break;
        }
    }
    return 0;
}