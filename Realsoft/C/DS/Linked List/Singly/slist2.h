#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

typedef struct list
{
    NODE *st;
    int cnt;
}SLIST;

void init(SLIST *t)
{
    t->cnt = 0;
    t->st = NULL;
}

NODE * creatnode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
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

void addE(SLIST *t, int d)
{
    NODE *b;
    if(t->st == NULL)
        t->st = creatnode(d);
    else
    {
        b = getlastnode(t->st);
        b->next = creatnode(d);
    }
    t->cnt++;
}

void addB(SLIST *t, int d)
{
    NODE *a = creatnode(d);
    a->next = t->st;
    t->st = a;
    t->cnt++;
}

//Function to display
void display(SLIST *t)
{
    NODE *a = t->st;
    if(a == NULL)
        printf("\nEmpty List");
    else
    {
        printf("\nData\n");
        while(a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}

void odddisplay(SLIST *t)
{
    NODE *a = t->st;
    if(a == NULL)
        printf("\nEmpty List\n");
    else
    {
        printf("\nList Data\n");
        while(a != NULL)
        {
            if(a->data%2 != 0)
                printf("%4d", a->data);
            a = a->next;
        }
    }
}

void evendisplay(SLIST *t)
{
    NODE *a = t->st;
    if(a == NULL)
        printf("\nEmpty List\n");
    else
    {
        printf("\nList Data\n");
        while(a != NULL)
        {
            if(a->data%2 == 0)
                printf("%4d", a->data);
            a = a->next;
        }
    }
}

int count(SLIST *t)
{return t->cnt;}

int sum(SLIST *t)
{
    NODE *a = t->st;
    int tot = 0;
    while(a != NULL)
    {
        tot += a->data;
        a = a->next;
    }
    return tot;
}

//Function to delete fitst node
/*void delFirst(SLIST *t)
{
    NODE *a = t->st;
    if(t->cnt == 0)
        return;
    t->st = a->next;
    free(a);
    t->cnt--;
}*/

void delFirst(SLIST *t)
{
    NODE *a = t->st;
    if (t->cnt == 0 || a == NULL)
        return;
    t->st = a->next;
    free(a);
    t->cnt--;
}

//Function to delete last node from list
void dellast(SLIST *t)
{
    NODE *a = t->st; NODE *b;
    if(t->cnt == 0)
        return;
    else
    {
        while(a->next != NULL)
        {
            b = a;
            a = a->next;
        }
        b->next =NULL;
        free(a);
        t->cnt--;
    }
}

void delall(SLIST *t)
{
    while(t->st != NULL)
        delFirst(t);
}

//Function to find max
int findmax(SLIST *t)
{
    NODE *a = t->st;
    int max = a->data;
    for(a = a->next; a != NULL; a = a->next)
        if(a->data > max)
            max = a->data;
    return max;
}

int findmin(SLIST *t)
{
    NODE *a = t->st;
    int min = a->data;
    for(a = a->next; a != NULL; a = a->next)
        if(a->data < min)
            min = a->data;
    return min;
}

NODE * search(SLIST *t, int sv)
{
    NODE *a = t->st;
    while(a != NULL)
    {
        if(a->data == sv)
            break;
        a = a->next;
    }
    return a;
}

void findReplace(SLIST *t, int sv, int rv)
{
     NODE *a = t->st;
    while(a != NULL)
    {
        if(a->data == sv)
            a->data = rv;
        a = a->next;
    }
}

int checkOrder(SLIST *t)
{
    NODE *a = t->st;
    NODE *b = a->next;
    
    while(b != NULL)
    {
        if(a->data > b->data)
            break;
        a = a->next;
        b = b->next;
    }
    return (b == NULL);
}

int ocount(SLIST *t)
{
    int cnt = 0;
    NODE *a = t->st;
    while(a != NULL)
    {
        if(a->data%2 != 0)
            cnt++;
        a = a->next;
    }
    return cnt;
}

int ecount(SLIST *t)
{
    int cnt = 0;
    NODE *a = t->st;
    while(a != NULL)
    {
        if(a->data%2 == 0)
            cnt++;
        a = a->next;
    }
    return cnt;
}

void reverse(SLIST *t)
{
    NODE *a = t->st, *b, *c = NULL;
    while(a != NULL)
    {
        b = a;
        a = a->next;
        b->next = c;
        c = b;
    }
    t->st = c;
}

/*
    Check Order
    1 - true
    0 - false
*/

/*
    {
            tmp = a->next;
            a->next = b->next;
            b->next = a->next;
        }
*/

void deliNode(SLIST *t, int pos)
{
    NODE *a = t->st, *b, *c;
    if(t->st == NULL || pos < 1 || pos > t->cnt)
        return;
    if(pos == 1)
        delFirst(t);
}

void mr()
{

}

void insertA(SLIST *t, int pos, int d)
{
    int i = 1;
    NODE *a = t->st, *b, *c;
    if(t->st == NULL || pos < 1|| pos > t->cnt)
        return;
    if(pos == t->cnt)
        addE(t, d);
    else
    {
        while(i <= pos)
        {
            b = a;
            a = a->next;
            i++;
        }
        c = creatnode(d);
        b->next = c;
        c->next = a;
        t->cnt++;
    }
}

void arrayToList(SLIST *t, int *b, int n)
{
    int i = 0;
    NODE *a, *c;
    if(t->st != NULL)
        delall(t);
    while(i < n)
    {
        a = creatnode(b[i]);
        if(t->st == NULL)
            t->st = a;
        else
            c->next = a;
        c = a;
        t->cnt++;
        i++;
    }
}



int * ListToArray(SLIST *t)
{
    int i = 0, n = t->cnt;
    NODE *a = t->st;
    int *b = (int *)malloc(n*sizeof(int));
    while(a != NULL)
    {
        b[i++] = a -> data;
        a = a->next;
    }
    return b;
}



void fromFile(SLIST *t)
{
    FILE *f1;
    NODE *a = t->st, *b;
    int d;
    f1 = fopen("list.dat", "rb");
    if(f1 == NULL)
        return ;
    if(t->st != NULL)
        delall(t);
    while(1)
    {
        fread(&d, sizeof(int), 1, f1);
        if(feof(f1))
            break;
        a = creatnode(d);
        if(t->st == NULL)
            t->st = a;
        else
            b->next = a;


    }
    fclose(f1);
    return;
}

void toFile(SLIST *t)
{
    FILE *f1;
    int d;
    NODE *a = t->st;
    if(t->st == NULL) //Empty List
        return;
        f1 = fopen("list.dat", "wb");
        while(a != NULL)
        {
            d = a->data;
            fwrite(&d, sizeof(int), 1, f1);
            a = a->next;
        }
    fclose(f1);
    return;
}

//Function to sort list in ascending order using selection sort
void sort(SLIST *t)
{
    int tmp;
    NODE *a = t->st, *b, *c;
    if(t->st == NULL)
        return;
    while(a->next != NULL)
    {
        b = a;
        for(c = b->next; c != NULL; c = c->next)
            if(c->data < b->data)
                b = c;
        if(a != b)
        {
            tmp = a->data;
            a->data = b->data;
            b->data = tmp;
        }   
        a = a->next;
    }
}

//Recursion
void rdisplay(NODE *a)
{
    if(a == NULL)
        return;
    rdisplay(a->next);
    printf("%4d", a->data);
}

//Function to creat List
void creatList(SLIST *t)
{
    int d;
    delall(t);
    while(1)
    {
        printf("\nData : ");
        scanf("%d", &d);
        if(d == 0)
            break;
        addE(t, d);
    }
}

//Merging of two ordered List
SLIST merge(SLIST *p, SLIST *q)
{
    NODE *a = p->st, *b = q->st;
    SLIST r;
    int d;
    init(&r);
    while(a && b)
    {
        if(a->data < b->data)
        {
            d = a->data;
            a = a->next;
        }
        else
        {
            d = b->data;
            b = b->next;
        }
        addE(&r, d);
    }
    while(a)
    {
        d = a->data;
        addE(&r, d);
        a = a->next;
    }
    while(b)
    {
        d = b->data;
        addE(&r, d);
        b = b->next;
    }
    return r;
}

//Function to copy sourse list to destination list
/*void copyList(SLIST *destination, SLIST *source)
{
    NODE *a = source->st;
    if (destination->st != NULL)
        delall(destination); 
    while (a != NULL)
    {
        addE(&destination, a->data);
        a = a->next;
    }
}*/


void appendList(SLIST *d, SLIST *s)
{
    NODE *a = s->st;
    while(a != NULL)
    {
        addE(d, a->data);
        a = a->next;
    }
}

SLIST unionList(SLIST *a, SLIST *b)
{
    int data;
    NODE *c = a->st, *d = b->st, *e, *f;

    SLIST obj;
    init(&obj);
    
    while(c && d)
    {
        if(c->data == d->data)
        {
            data = c->data;
            c = c->next;
            d = d->next;
        
        }
        else
        {
            if(c->data < d->data)
            {
                data = c->data;
                c = c->next;
            }
            else
            {
                data  = d->data;
                d = d->next;
            }
        }
        if(obj.st == NULL)
        {
            e = creatnode(data);
            obj.st = e;
        }
        else
        {
            if(f->data == data)
                continue;
            e = creatnode(data);
            f->next = e;
        }
        obj.cnt++;
        f = e;
    }

    while(d)
    {
        data = d->data;
        if(f->data == data);
        else    
        {
            e = creatnode(data);
            f->next = e;
            f = e;
            obj.cnt++;
        }
        d = d->next;
    }
    return obj;
}

void copyList(SLIST *d, SLIST *s)
{
    NODE *a = s->st;
    if(d->st != NULL)
        delall(d);
    while(a != NULL)
    {
        addE(d, a->data);
        a = a->next;
    }
}

