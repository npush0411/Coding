#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void add_at_begin(Node *head, int d)
{
    Node *new_node;
    new_node = new Node();
    new_node->data = d;
    new_node->next = head;
    head = new_node;
}

Node * getlastnode(Node *head)
{
    Node *a = head;
    while(a->next != NULL)
        a = a->next;
    return a;
}

void add_at_end(Node *head, int d)
{
    Node *last = getlastnode(head);
    Node *new_node;
    new_node = new Node();
    new_node->data = d;
    new_node->next = NULL;
    last->next = new_node;
}

Node * getNode(Node *head, int d)
{
    Node *a = head;
    while(a->data != d)
        a = a->next;
    return a;
}

void add_after(Node *pos, int d)
{
    Node *new_node = new Node();
    new_node->data = d;
    new_node->next = pos->next;
    pos->next = new_node;
}

void display_List(Node *head)
{
    Node *a = head;
    if(a == NULL)
        printf("\nList is Empty");
    else
    {
        printf("\nList Data\n");
        while(a != NULL)
        {
            printf("%d\t", a->data);
            a = a->next;
        }
    }
}

int main()
{
    Node *head = NULL;
    int d, opt, temp;
}
