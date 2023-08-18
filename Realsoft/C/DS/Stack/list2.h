#include <stdio.h>
#include <stdlib.h>

//Version 2 - Local Head Pointer
//Advantage - Many Li*ps can be operated

typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE * creatnode(int d)
{
    NODE* a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}
NODE * getlastnode(NODE *a)
{
    while(a->next != NULL)
        a = a->next;
    return a;
}
void addE(int d, NODE **p)
{
    NODE *a;
    NODE *b;
    if(*p == NULL)
        *p = creatnode(d);
    else
    {
        a = creatnode(d);
        b = getlastnode(*p);
        b->next = a;
    }
}

void addB(int d, NODE **p)
{
    NODE *a = creatnode(d);
    a->next = *p;
    *p = a;
}

void delFirst(NODE **p)
{
    
}

int count(NODE **p)
{
    int cnt = 0;
    NODE *a = *p;
    while(a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}

int sum(NODE **p)
{
    int tot = 0;
    NODE *a = *p;
    while(a != NULL)
    {
        tot += a->data;
        a = a->next;
    }
    return tot;
}

void display(NODE **p)
{
    NODE *a = *p;
    if(a == NULL)
        printf("\nEmpty LIST\n");
    else
    {
        printf("\nList Data\n");
        for(; a != NULL; a = a->next)
            printf("%4d", a->data);
    }
} 
