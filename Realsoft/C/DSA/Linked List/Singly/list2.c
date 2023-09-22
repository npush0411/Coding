#include <stdio.h>
#include <stdlib.h>

//Version 2 - Local Head Pointer
//Advantage - Many Lists can be operated

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

int main()
{
    int opt, d;
    NODE *st = NULL;
    while(1)
    {
        printf("\nMenue\n1. Add at END\n2. Add at Begin\n3. Count Nodes\n4. Sum\n5. Display\n6. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 5)
            break;
        switch (opt)
        {
            case 1:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addE(d, &st); break;
            case 2:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addB(d, &st); break;
            case 3:
                printf("\nCount : %d", count(&st)); break;
            case 4:
                printf("\nSum : %d", sum(&st)); break;
            case 5: 
                display(&st); break;
        }
    }
    return 0;
}
