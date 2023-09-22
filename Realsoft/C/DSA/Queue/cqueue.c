#include <stdio.h>

#define M 5

typedef struct que
{
    int arr[M];
    int fr, rr;
}CQ;

void init(CQ *t)
{
    int i = 0;
    while(i < M)
    {
        t->arr[i] = -1; //Location is Empty
        i++;
    }
    t->rr = t->fr = M - 1;
}

int count(CQ *t)
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

void insert(CQ *t, int d)
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

void remque(CQ *t)
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

void display(CQ *t)
{
    int i = 0;
    if(count(t) == M)
        printf("\nEmpty Queue\n");
    else
    {
        printf("\nQueue Data\n");
        if(t->fr < t->rr)
            for(i = t->fr + 1; i <= t->rr; i++)
                printf("%d", t->arr[i]);
        else    
        {
            for(i = t->fr + 1; i < M; i++)
                printf("%4d", t->arr[i]);
            for(i = 0; i <= t->rr; i++)
                printf("%4d", t->arr[i]);
        }
    }
}

int menue()
{
    int opt;
    printf("\n-- Circular QUEUE --\n1. insert\n2. remove\n3. Display\n4. Exit\nOption : ");
    scanf("%d", &opt);
    return opt;
}

int main()
{
    CQ p;
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