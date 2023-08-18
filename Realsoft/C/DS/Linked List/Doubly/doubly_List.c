#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *pre;
    int data;
    struct node *next;
}NODE;

typedef struct doubleList
{
    NODE *st;
    NODE *ed;
}DLIST;

void init(DLIST *t)
{
    t->st = t->ed = NULL;
}

//Create Node
NODE * creatNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->next = a->pre = NULL;
    a->data = d;
    return a;
}

//Function to add at END
void addE(DLIST *t, int d)
{
    NODE *a = creatNode(d);
    NODE *b = t->ed;
    if(t->st == NULL)
        t->st = a;
    else{
        b->next = a;
        a->pre = b;
    }
    t->ed = a;
}

//Function to add at BEGIN
void addB(DLIST *t, int d)
{
    NODE *a = creatNode(d);
    NODE *b = t->st;
    if(t->ed == NULL)
        t->ed = a;
    else{
        b->pre = a;
        a->next = b;
    }
    t->st = a;
}

//Display List start to End
void displaySE(DLIST *t)
{
    NODE *a = t->st;
    if(t->st == NULL)
    {
        printf("\nEmpty List\n");
        return;
    }
    printf("\nSTART to END\n");
    while(a)
    {
        printf("%4d", a->data);
        a = a->next;
    }
}

//Display List End to Start
void displayES(DLIST *t)
{
    NODE *a = t->ed;
    if(t->ed == NULL)
    {
        printf("\nEmpty List\n");
        return;
    }
    printf("\nEND to START");
    while(a)
    {
        printf("%4d", a->data);
        a = a->pre;
    }
}

//Function to delete First NODE
void delFirst(DLIST *t)
{
    NODE *a = t->st, *b;
    if(t->st == NULL)//Empty List
        return ;
    if(t->st == t->ed) //Only 1 NODE
        t->st = t->ed = NULL;
    else
    {
        b = a->next;
        b->pre = NULL;
        t->st = b;
    }
    free(a);
}

//Function to delete last node from LIst
void delLast(DLIST *t)
{
    NODE *a = t->ed, *b;
    if(t->ed == NULL) //Empty List
        return;
    if(t->ed == t->st) //Only 1 NODE
        t->st = t->ed = NULL;
    else
    {
        b = a->pre;
        b->next = NULL;
        t->ed = b;
    }    
    free(a);
}

//Function to delete ith NODE
void deliNODE(DLIST *t, int pos)
{
    NODE *a = t->st, *b, *c;
    int i = 1;

    if(t->st == NULL|| pos < 1)//Empty List or Invalid POS
        return; 
    if(pos == 1)
        delFirst(t);
    else
    {
        while(i < pos && a != NULL)
        {
            b = a;
            a = a->next;
            i++;
        }
        if(a == NULL)//Requested NODE not Exists
            return;
        if(a->next == NULL) //Last NODE
            delLast(t);
        else{
            b = a->pre;
            c = a->next;
            b->next = c;
            c->pre = b;
            free(a);
        }
    }
}

//Function to insert before
void insertB(DLIST *t, int pos, int d)
{
    int i = 1;
    NODE *a = t->st, *b, *c;
    if(pos == 1)
        addB(t, d);
    else
    {
        while(i < pos && a != NULL)
        {
            b = a;
            a = a->next;
            i++;
        }
        if(a == NULL)
        {
            printf("\nRequested NODE not Exists");
            return;
        }
        else
        {
            c = creatNode(d);
            b->next = c;
            c->pre = b;
            c->next = a;
            a->pre = c;
        }
    }
}

//Function to insert node after Ver-1
void insertAfter(DLIST *t, int pos, int d)
{
    NODE *a = t->st, *b, *c; int i = 1;
    if(t->st == NULL || pos < 1) //Request invalid
        return;
    while(i <= pos && a != NULL)
    {
        b = a;
        a = a->next;
        i++;
    }
    if(a == NULL)
    {
        printf("\nOutside range");
        return;
    }
    if(a->next == NULL)//insert after last node
        addE(t, d);
    else
    {
        b = a->next;
        c = creatNode(d);
        a->next = c;
        c->pre = a;
        c->next = b;
        b->pre = c;
    }
}


//Function to compute data sum
int sum(DLIST *t)
{
    int tot = 0;
    NODE *a = t->st;
    while(a != NULL)
    {
        tot = tot + a->data;
        a = a->next;
    }
    return tot;
}

//Function to count nodes from DLIST
int countNODE(DLIST *t)
{
    int cnt = 0;
    NODE *a = t->st;
    while(a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}

//Version 2 (Function calling is expensive so ver 1 is more efficient)
void insertA(DLIST *t, int pos, int d)
{
    int i = 1, n = countNODE(t);
    NODE *a = t->st, *b, *c;
    if(pos < 1 || pos > n)
        return;
    if(pos == n)
        addE(t, d);
    else
    {
        while(i <= pos)
        {
            b = a;
            a = a->next;
            i++;
        }
        c = creatNode(d);
        b->next = c;
        c->pre = b;
        c->next = a;
        a->pre = c;
    }
}

int main()
{
    DLIST a; int opt, d;
    while(1)
    {
        printf("\nMenue\n1. Add at End\n2. Add at Begin\n3. Display S->E\n4. Display E->S\n5. Del First\n6. Del Last\n7. Del ith NODE\n8. Insert Before\n9. Insert After Ver 1\n10. Sum\n11. Count NODE\n12. Insert After Ver 2\n13.Exit\n Option : ");
        scanf("%d", &opt);
        if(opt > 12)
            break;
        switch (opt)
        {
            case 1:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addE(&a, d); 
                break;
            case 2:
                printf("\nEnter Data : ");
                scanf("%d", &d);
                addB(&a, d); 
                break;
            case 3:
                displaySE(&a); break;
            case 4:
                displayES(&a); break;
            case 5:
                delFirst(&a); break;
            case 6:
                delLast(&a); break;
            case 7:
                printf("\nEnter Position : ");
                scanf("%d", &opt);
                deliNODE(&a, opt);
                break;
            case 8:
                printf("\nEnter POS to insert before : ");
                scanf("%d", &opt);
                printf("\nEnter Data : ");
                scanf("%d", &d);
                insertB(&a, opt, d);
                break;
            case 9:
                printf("\nEnter POS to insert After : ");
                scanf("%d", &opt);
                printf("\nEnter Data : ");
                scanf("%d", &d);
                insertAfter(&a, opt, d);
                break;
            case 10:
                printf("\nSUM : %d", sum(&a)); break;
            case 11:
                printf("\nCOUNT: %d", countNODE(&a)); break;
            case 12:
                printf("\nEnter POS to insert After : ");
                scanf("%d", &opt);
                printf("\nEnter Data : ");
                scanf("%d", &d);
                insertA(&a, opt, d);
                break;
        }
    }
    return 0;
}