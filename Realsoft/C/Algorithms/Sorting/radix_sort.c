#include <stdio.h>

//RADIAX SORT

#define M 10

typedef struct q
{
    int arr[M];
    int fr, rr;
}Q;


void init(Q *t)
{
    t->fr = 0;
    t->rr = -1;
}

int getindex(int val, int pos)
{
    int index = 0;
    switch(pos)
    {
        case 1: //Rightmost
            index = val % 10; break;
        case 2: //Mid
            index = (val / 10)% 10; break;
        case 3:
            index = val /100; break;
    }
    return index;
}

void input(int *a)
{
    int i;
    printf("\n-- Enter Data --\n");
    for(i = 0; i < M;)
    {
        scanf("%d", (a+i));
        if(*(a+i) < 99 && *(a+i) > 999)
            continue;
        else
            i++;
    }
}

void insert(Q *t, int d)
{
    t->rr++;
    t->arr[t->rr] = d;
}

int remque(Q *t)
{
    return t->arr[t->fr++];
}

void rin(Q *p, int *a, int flg)
{
    int i = 0;
    int index;
    while(i < M)
    {
        index = getindex(a[i], flg);
        insert(p+index, a[i]);
        i++;
    }
}

void rout(Q *p, int *a)
{
    int i = 0, k = 0, j, val;
    while(i < M)
    {
        j = 0;
        while(j <= p[i].rr)
        {
            val = remque(p+i);
            a[k++] = val;
            j++;
        }
        i++;
    }
}

void display(int *a, int flg)
{
    int i = 0;
    if(flg == 0)
        printf("\nBefore Sorting\n");
    else
        printf("\nAfter Sorting\n");
    for(i = 0; i < M; i++)
        printf("\t%d", *(a+i));
}

void radix(Q *p, int *a)
{
    int pos = 1, i = 0;
    while(pos <= 3)
    {
        i = 0;
        while(i < 10)
        {
            init(p+i);
            i++;
        }
        rin(p, a, pos);
        rout(p, a);
        pos++;
    }
}

int main()
{
    Q p[M]; int x[M];
    input(x);
    display(x, 0);
    radix(p, x);
    display(x, 1);
}