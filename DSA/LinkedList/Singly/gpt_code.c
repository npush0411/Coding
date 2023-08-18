#include <stdio.h>
#include "list.h"

int main()
{
    int t = 0, opt = 0, flg = 0, data;
    Node *head = NULL;
    
    while (1)
    {
        printf("\n!! Welcome to the Linked List !!");
        printf("\n\n----     Menu     ----\n\n1. Create a Linked List\n");
        printf("2. Get Length of Linked List\n3. Check Whether List is empty.\n");
        printf("4. Insert New Node\n5. Delete Node\n6. Number of empty nodes\n7. Fill the empty nodes\n");
        printf("\n8. Search in list\n9. Display Full List\n10. Exit\n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &t);
        
        if (t == 10)
            break;
        
        switch (t)
        {
            case 1:
                flg = 1;
                head = create_list();
                break;
            
            case 2:
                if (flg == 1)
                {
                    printf("\nLength of Linked List is -> %d", get_length(head));
                }
                else
                {
                    printf("\nLinked List has not been created yet!");
                }
                break;
            
            case 3:
                if (flg == 1)
                {
                    printf((isEmpty(head) ? "\nList is Empty" : "\nList is not Empty"));
                }
                else
                {
                    printf("\nLinked List has not been created yet!");
                }
                break;
            
            case 4:
                if (flg == 1)
                {
                    printf("\n1. Insert at head\n2. Insert at end\n3. Insert anywhere");
                    scanf("%d", &opt);
                    
                    switch (opt)
                    {
                        case 1:
                            insert_at_head(head, create_node());
                            break;
                        
                        case 2:
                            insert_at_end(head, create_node());
                            break;
                        
                        case 3:
                            printf("\nEnter data after which new node to insert: ");
                            scanf("%d", &data);
                            insert_node(head, create_node());
                            break;
                        
                        default:
                            printf("\nInvalid Input");
                            break;
                    }
                }
                else
                {
                    printf("\nLinked List has not been created yet!");
                }
                break;
            
            case 5:
                if (flg == 1)
                {
                    printf("\nEnter Data to delete: ");
                    scanf("%d", &data);
                    delete_node(head, find_Node(head, data));
                }
                else
                {
                    printf("\nLinked List has not been created yet!");
                }
                break;
            
            case 6:
                if (flg == 1)
                {
                    printf("Number of Empty Nodes in List: %d", cnt_empty_nodes(head));
                }
                else
                {
                    printf("\nLinked List has not been created yet!");
                }
                break;
            
            case 7:
                if (flg == 1)
                {
                    fill_empty(head);
                }
                else
                {
                    printf("\nLinked List has not been created yet!");
                }
                break;
            
            case 8:
                if (flg == 1)
                {
                    printf("\nEnter Data to search: ");
                    scanf("%d", &data);
                    printf((search_data(head, data) ? "\nData Found" : "\nNot Found"));
                }
                else
                {
                    printf("\nLinked List has not been created yet!");
                }
                break;
            case 9: 
                if (flg == 1)
                    print_list(head);
                else
                    printf("\nLinked List has not been created yet!");
                break;
        }
    }
    return 0;
}
           
