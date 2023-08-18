/*
    Standard Template Library
    Made by -> Pushkar R Nashikkar
    Date -> 30-7-2020
*/

#include <stdio.h>
#include <stdlib.h>

//defining the structure for linked list
typedef struct node {
    int data;       //data part
    struct node *next;      // link part
}Node;

//Function to creat new node
// it returns base address of new node if creation is successfull
//otherwise terminates program execution by showing suitable error
Node* create_node()
{
    Node *temp = (Node *)malloc(sizeof(Node));      //creating new node using malloc function
    
    //checking weather the node is created successfully or not
    if (temp == NULL) {
        printf("Memory allocation failed.\n");      //showing suitable error
        exit(EXIT_FAILURE);     // terminating the execution
    }
    temp->data = -1;
    temp->next = NULL;      //making newnode end of list
    return temp;        //returning new node address to the main()
}

//Function to input data at newnode
void input(Node *node)      //asks for the node address where we want to store the data
{
    printf("\nEnter Data: ");
    scanf("%d", &node->data);
}

//function to insert newly created node to the Linked list
void insert_node(Node *node, Node *newnode)     //asks for after which node we want to inset new and base address of newly created node
{
    //swaping addresses (refer basis of linked list)
    Node *temp;
    temp = node->next;
    node->next = newnode;
    newnode->next = temp;
}

//function to print the full list
void print_list(Node *head)     //Asks for the head of the Linked List
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

//function to insert newly created node at head
//function chages the head 
void insert_at_head(Node *head, Node *node)     //it asks for the head and the newnode to be inserted
{   
    node->next = head;
    head =  node;
}

//Function to insert node at the end of Linked List
void insert_at_end(Node *head, Node *node)      //Asks for the head of the list and the newnode to be inserted
{   
    Node *tmp; tmp = head;
    //Loop to find out end of the Linked List
    while(tmp != NULL)
    {
        tmp = tmp->next;
    }
    //calling insert node function modify List
    insert_node(tmp, node);
}

//function to deallocate memory space occupied to avoid memory leakage
void free_list(Node *head)
{
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

//Function to find the node to be deleted by the data
Node* node_to_delete(Node *head)        //Asks for the head only
{
    int data;    Node *tmp1; tmp1 = head;
    printf("\nEnter Data to delete : ");
    scanf("%d", &data);
    while(tmp1->data != data)
        tmp1 = tmp1->next;
    return tmp1;
}

//Function to delete node
void delete_node(Node *head, Node *del_node)        //Asks for the head and the address of node to be deleted
{
    Node *tmp, *tmp1; tmp = head; tmp1 = head;
    
    /*while(tmp != del_node)
        tmp = tmp->next;    */
   // tmp = del_node->next;
    //Function to find out previous node to node to be deleted
    while(tmp1->next != del_node)
        tmp1 = tmp1->next;
    //Rejoining the List
    tmp1->next = del_node->next;
}

//Function to Search the element in the list
//Returns 1 if found otherwise 0
int search_data(Node *head)       //Asks for the List head and the data to be searched
{
    int data;
    printf("\nEnter Data Tobe Searched : ");
    scanf("%d", &data);
    Node *tmp; tmp = head;
    while (tmp->data != data)
        tmp = tmp -> next;
    return (tmp->data == data);
}

Node* create_list()
{
    return create_node();
}

int isEmpty(Node *head)
{
    int cnt = 0; Node *tmp; tmp = head; 
    while(tmp != NULL)
    {
        if(tmp->data >= 0)
            cnt++;
        tmp = tmp->next;
    }
    return (cnt == 0);
}

//Function to get length of the Linked List
int get_length(Node *head)
{
    int cnt = 1; Node *tmp; tmp = head; 
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

//Function to findout desired node
Node* find_Node(Node *head, int data)
{
    Node *tmp; tmp = head;
    while(tmp != NULL)
    {
        if(tmp->data == data)
            break;
        tmp = tmp->next;
    }
    return tmp;
}

int cnt_empty_nodes(Node *head)
{
    Node *tmp; int cnt = 0; tmp = head;
    while(tmp != NULL)
    {
        if(tmp->data < 0)
            cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void fill_empty(Node *head)
{
    Node *tmp; int i = 1; tmp = head;
    while(tmp != NULL)
    {
        if(tmp->data < 0)
        {
            printf("\nEnter Data for empty Node no %d", i++);
            scanf("%d", &tmp->data);
            tmp = tmp->next;
        }
    }
}

//List Menue returns option
int List_menue()
{
    int opt = 0;
    printf("\n--------List Menue---------\n1. Creat List\n2. Insert at Head\n3. Insert at End\n4. Insert at middle\n5. Display List\n6. Search in List\n7. Check Weather list is empty\n8. Get Size of List\n9. Count Emoty Nodes in List\n10. Fill Empty Nodes\n===========================\n\nEnter Option : ");
    scanf("%d", &opt);
    printf("\n===========================\n");
    return 0;
}