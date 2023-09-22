#include <stdio.h>
#include <stdlib.h>

//Version 1 - Global head pointer
//Drawback - Only 1 list can be created and operated

typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *st = NULL;

NODE * creatnode(int d)
{
    NODE* a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}
NODE * getlastnode()
{
    NODE *a = st;
    while(a->next != NULL)
        a = a->next;
    return a;
}
void addE(int d)
{
    NODE *a;
    NODE *b;
    if(st == NULL)
        st = creatnode(d);
    else
    {
        a = creatnode(d);
        b = getlastnode();
        b->next = a;
    }
}

void addB(int d)
{
    NODE *a = creatnode(d);
    a->next = st;
    st = a;
}

int count()
{
    int cnt = 0;
    NODE *a = st;
    while(a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}

int sum()
{
    int tot = 0;
    NODE *a = st;
    while(a != NULL)
    {
        tot += a->data;
        a = a->next;
    }
    return tot;
}

void display()
{
    NODE *a = st;
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
                addE(d); break;
            case 2:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addB(d); break;
            case 3:
                printf("\nCount : %d", count()); break;
            case 4:
                printf("\nSum : %d", sum()); break;
            case 5: 
                display(); break;
        }
    }
    return 0;
}