//Linked List Implementation of STACK
#include <stdio.h>
#include <stdlib.h>
//#include "list2.h"

typedef struct node
{
    int data;
    struct node *next;
}NODE;

typedef struct stack
{
    NODE *top;
}STK;

//Function to initialise
void init(STK *t)
{
    t->top = NULL;
}

//Function to creat NODE
NODE * creatNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}


//Function to insert at Top
void push(STK *t, int d)
{
    NODE *a = creatNode(d);
    a->next = t->top;
    t->top = a;
}

//Function to pop top element from stack
void pop(STK *t)
{
    NODE *a = t->top;
    if(t->top == NULL)
        printf("\nUnder-Flow");
    else
    {
        t->top = a->next;
        free(a);
    }
}

//Function to display the STACK (Reverse List)
void display(STK *t)
{
    NODE *p = t->top;
    if(t->top == NULL)
        printf("\nEmpty STACK");
    else
    {
        printf("\nSTACK DATA\n");
        while(p)
        {
            printf("%4d", p->data);
            p = p->next;
        }
    }
}

int menue()
{
    int opt;
    printf("\nSTACK MENUE\n1. PUSH\n2. POP\n3. Display\n4. Exit\nOption : ");
    scanf("%d", &opt);
    return opt;
}

int main()
{
    int opt, d;
    STK t;
    init(&t);
    while(1)
    {
        opt = menue();
        if(opt > 3)
            break;
        switch(opt)
        {
            case 1:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                push(&t, d); break;
            case 2:
                pop(&t); break;
            case 3:
                display(&t); break;
        }
    }
}