#include <stdio.h>
#include <stdlib.h>
#include "slist.h"

//Version 3
//Linked List as a Data Type

int main()  
{
    SLIST p;
    FILE *f1 = fopen("list.dat", "wb");
    fclose(f1);
    int *ptr;
    int opt, d, sv, rv, n, i = 0;
    init(&p);   
    while(1)
    {
        printf("\nMenue\n1. Add at END\n2. Add at Begin\n3. Count Nodes\n4. Sum\n5. Display All\n6. Display odd data\n7. Display Even Data\n8. Del Last\n9. Del First\n10. Del All\n11. Find Max\n12. Find Min\n13. Search\n14. Find and Replace\n15. Check Order\n16. Odd Count\n17. Even Count\n18. Reverse List\n19. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 19)
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
                odddisplay(&p); break;
            case 7:
                evendisplay(&p); break;
            case 8:
                dellast(&p); break;
            case 9:
                delFirst(&p); break;
            case 10:
                delall(&p); break;
            case 11:
                if(p.st == NULL)
                    printf("\nEmpty List");
                else    
                    printf("\nMax : %d", findmax(&p));
                break;
            case 12:
                if(p.st == NULL)
                    printf("\nEmpty List");
                else    
                    printf("\nMin : %d", findmin(&p));
                break;
            case 13:
                printf("\nSearch Value : ");
                scanf("%d", &sv);
                if(search(&p, sv) == NULL)
                    printf("\nNot Found");
                else
                    printf("\nFound");
                break;
            case 14:
                printf("\nSearch Value : ");
                scanf("%d", &sv);
                printf("\nReplace Value : ");
                scanf("%d", &rv);
                findReplace(&p, sv, rv);
                break;
            case 15:
                if(checkOrder(&p))
                    printf("\nOrdered List");
                else    
                    printf("\nUn-Ordered List");
                break;
            case 16:
                printf("\nOdd Count : %d", ocount(&p)); break;
            case 17:
                printf("\nOdd Count : %d", ecount(&p)); break;
            /*case 18:
                reverse(&p); break;*/
            case 18:
                printf("\nInformation Count");
                scanf("%d", &n);
                ptr = (int *)malloc(sizeof(int) * n);
                for(i = 0; i < n; i++)
                {
                    printf("\nData : ");
                    scanf("%d", (ptr + i));
                }
                arrayToList(&p, ptr, n);
                break;
            case 19:
                ptr = ListToArray(&p);
                if(ptr == NULL)
                    printf("\nEmpty List");
                else    
                {
                    printf("\nData\n");
                    for(i = 0; i < p.cnt; i++)
                        printf("%4d", ptr[i]);
                    free(ptr);
                }
                break;
            case 20:
                fromFile(&p);
                break;
            case 21:
                toFile(&p);
                break;
            case 22:
                sort(&p);
                break;
            case 23:
                if(p.st == NULL)
                    printf("\nEmoty List");
                else    
                    rdisplay(p.st);
                break;
        }
    }
    return 0;
}
