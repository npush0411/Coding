#include <stdio.h>

#define M 5

typedef struct que
{
    int arr[M];
    int fr, rr;
}CQUE;

void init(CQUE *t)
{
    int i = 0;
    while(i < M)
    {
        t->arr[i] = -1; //Location is Empty
        i++;
    }
    t->rr = t->fr = M - 1;
}

int count(CQUE *t)
{
    int i = 0, cnt = 0;
    while(i < M)
    {
        if(t->arr[i] == -1)
            cnt++;
        i++;
    }
    return cnt;
}

void insert(CQUE *t, int d)
{
    if(count(t) == 0)
        printf("\nOverFlow");
    else
    {
        if(t->rr == M - 1)
            t->rr = 0;
        else
            t->rr++;
        t->arr[t->rr] = d;
    }
}

void remque(CQUE *t, int d)
{
    if(count(t) == M)
        printf("\nUnderFlow");
    else
    {
        if(t->fr == M - 1)
            t->fr = 0;
        else
            t->fr++;
        t->arr[t->fr] = -1;

    }
}