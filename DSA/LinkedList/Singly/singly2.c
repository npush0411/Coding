#include <stdio.h>
#include <stdlib.h>
#include <list.h>

//calling program
int main()
{
    Node *head = NULL;
    head = create_node();
    input(head);
    insert_node(head, create_node());
    input(head->next);
    insert_node(head->next, create_node());
    input(head->next->next);
    print_list(head);
    free_list(head);
    return 0;
}
