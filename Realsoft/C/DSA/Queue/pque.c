//Ascending Priority Queue  Using Arrays
#include <stdio.h>

#define M 5

typedef struct queue
{
    int arr[M];
    int fr, rr;
}PQ;

void init(PQ *t)
{
    t->fr = 0;
    t->rr = -1;
}

void insert(PQ *t, int d)
{
    int i = t->fr;
    if(t->rr == M - 1)
        printf("\nOverflow");
    else
    {
        for(i = t->rr; i >= 0 && t->arr[i] > d; i++)
            t->arr[i + 1] = t->arr[i];
        t->arr[i + 1] = d;
        t->rr++;
    }
}

void remque(PQ *t)
{
    int i = t->fr;
    if(t->rr < t->fr)
        printf("\nUnderFlow\n");
    else
    {
        for(i = t->fr; i < t->rr; i++)
            t->arr[i] = t->arr[i+1];
        t->rr--;
    }
}

void display(PQ *t)
{
    int i = t->fr;
    if(t->rr < t->fr)
        printf("\nEmpty QUEUE\n");
    else
    {
        printf("\nQueue Data\n");
        while(i <= t->rr)
        {
            printf("%4d", t->arr[i]);
            i++;
        }
    }
}

int menue()
{
    int opt;
    printf("\n-- Priority QUEUE --\n1. insert\n2. remove\n3. Display\n4. Exit\nOption : ");
    scanf("%d", &opt);
    return opt;
}

int main()
{
    PQ p;
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