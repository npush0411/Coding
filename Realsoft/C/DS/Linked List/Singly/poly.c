/*Polynomial Expressions And their use*/
#include <stdio.h>

typedef struct node
{
    int coe;
    int man;
    struct node *next;
}NODE;

typedef struct poly
{
    NODE *st;
}POLY;

void init(POLY *t)
{
    t->st = NULL;
}

//Function to creat NODE 
NODE * creatnode(int c, int m)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->coe = c;
    a->man = m;
    a->next = NULL;
    return a;
}

//Function to delete all nodes from polynomial expression
void dellAll(POLY *t)
{
    NODE *a = t->st;
    while(t->st != NULL)
    {
        t->st = a->next;
        free(a);
        a = t->st;
    }
}

//Function to creat polynomial LIST
void creatPoly(POLY *t)
{
    NODE *a = t->st, *b;
    int c, m;
    dellAll(t);
    while(1)
    {
        printf("\nCOE\tMAN\n");
        scanf("%d %d", &c, &m);
        if(c == 0 && m == 0)
            break;
        if(m < 0)
        {    printf("\nInvalid Mantisa"); continue; }
        if(t->st == NULL)
        {
            a = creatnode(c, m);
            t->st = a;
        }
        else
        {
            if(m >= b->man)
            {
                printf("\nInvalid");
                continue;
            }
            a = creatnode(c, m);
            b->next = a;
        }
        b = a;
    }
}

//Function to display polynomial expression
void display(POLY *t)
{
    NODE *a = t->st;
    printf("\nPOLY LIST\n");
    while(a != NULL)
    {
        if(a->coe > 0)
            printf("+");
        printf("%dX%d ", a->coe, a->man);
        a = a->next;
    }
}

POLY mul(POLY *p, POLY *q)
{
    POLY t;
    int c1, m1;
    NODE *a = p->st, *b = q->st, *c, *d;
    NODE *e, *f;
    init(&t);
    while(b != NULL)
    {
        a = p->st;
        while(a != NULL)
        {
            c1 = a->coe*b->coe;
            m1 = a->man + b->man;
            if(t.st == NULL)    
                c = d = t.st = creatnode(c1, m1);
            else
            {
                e = t.st;
                while(e != NULL && m1 <= e->man)
                {
                    if(e->man == m1)
                    {
                        e->coe=e->coe + c1;
                        break;
                    }
                    e = e->next;
                }
                if(e != NULL && m1 > e->man)
                {
                    c = creatnode(c1, m1);
                    c->next = e->next;
                    e->next = c;
                }
                else
                {
                    if(e == NULL)
                    {    
                        c = creatnode(c1, m1);
                        d->next = c;
                        d = c;
                    }
                }
            }
            a = a->next;
        }
        b = b->next;
    }
    return t;
}

POLY add(POLY *p, POLY *q)
{
    POLY t;
    int c1, m1;
    NODE *a = p->st, *b = q->st, *c, *d;
    init(&t);
    while(a && b)
    {
        if(a->man == b->man)
        { 
            c1 = a->coe + b->coe; 
            m1 = a->man; 
            a = a->next; 
            b = b->next; 
        } 
        else 
        {
            if(a->man > b->man)
            {
                c1 = a->coe;
                m1 = a->man;
                a = a->next;
            }
            else
            {
                c1 = b->coe; m1 = b->man;
                b = b->next;
            }
        }
        if(t.st == NULL)
            d = c = t.st = creatnode(c1, m1);
        else
        {
            c = creatnode(c1, m1);
            d->next = c;
            d = c;
        }
    }
    while(a != NULL)
    {
        c = creatnode(a->coe, b->man);
        d->next = c;
        d = c;
        a = a->next;
    }
    while(b != NULL)
    {
        c = creatnode(a->coe, b->man);
        d->next = c;
        d = c;
        b = b->next;
    }
    return t;
}

int main()
{
    int opt;
    POLY a, b, c;
    init(&a);
    init(&b);
    init(&c);
    while(1)
    {
        printf("\nMenue\n1. Creat Poly 1\n2. Creat Poly 2\n3. Display Poly 1\n4. Display Poly 2\n5. Display Poly 3\n6. Addition\n7. Subtraction\n8. Muiltiplication\n9. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 8)
            break;
        switch(opt)
        {
            case 1:
                creatPoly(&a); break;
            case 2:
                creatPoly(&b); break;
            case 3:
                display(&a); break;
            case 4:
                display(&b); break;
            case 5:
                display(&c); break;
            case 8:
                c = mul(&a, &b); break;
            case 6:
                c = add(&a, &b); break;
        }
    }
    return 0;
}