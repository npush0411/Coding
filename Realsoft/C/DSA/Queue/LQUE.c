#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

typedef struct queue
{
    NODE *fr;
    NODE *rr;
}QUE;

void init(QUE *t)
{
    t->fr = t->rr = NULL;
}

NODE * createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}

void insert(QUE *t, int d)
{
    NODE *a = createNode(d), *b;
    if(t->fr == NULL)
        t->fr = a;
    else
    {
        b = t->rr;
        b->next = a;
    }
    t->rr = a;
}

void remque(QUE *t)
{
    NODE *a = t->fr;
    if(t->fr == NULL)
        printf("\nUnderflow\n");
    else    
    {
        if(t->fr == t->rr)
            t->fr = t->rr = NULL;
        else
            t->fr = a->next;
        free(a);
    }
}

void display(QUE *t)
{
    NODE *a = t->fr;
    if(t->fr == NULL)
        printf("\nEmpty QUEUE\n");
    printf("\nQueData\n");
    while(a != NULL)
    {
        printf("%4d", a->data);
        a = a->next;
    }
}

int menue()
{
    int opt;
    printf("\n-- Linked List Implementation of QUEUE --\n1. insert\n2. remove\n3. Display\n4. Exit\nOption : ");
    scanf("%d", &opt);
    return opt;
}

int main()
{
    QUE p;
    int opt, d;
    init(&p);
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
                insert(&p, d);
                break;
            case 2:
                remque(&p); break;
            case 3:
                display(&p); break;
        }
    }
    return 0;
}