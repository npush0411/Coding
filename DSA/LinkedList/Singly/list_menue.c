#include <stdio.h>
#include "list.h"

int main()
{
    Node *head = NULL; int opt = List_menue();
    switch(opt)
    {
        case 1:
            if(head == NULL)
            {
                head = create_list();
                printf("\nList Created Successfully\n");
            }
            else
                printf("\nList Already Exists");
            break;
        default:
            if(head != NULL)
            {
                switch
            }

    }
}