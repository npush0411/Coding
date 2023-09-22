#include <stdio.h>

#define M 5

typedef struct queue
{
    int arr[M];
    int fr, rr;
}QUEUE;

void init(QUEUE *t)
{
    t->fr = 0;
    t->rr = -1;
}

void insert(QUEUE *t, int d)
{
    if(t->rr == M-1)
        printf("\nOverflow\n");
    else
    {
        t->rr++;
        t->arr[t->rr] = d;
    }
}

void remque(QUEUE  *t)
{
    if(t->rr < t->fr)
        printf("\nUnderflow\n");
    else    
        t->fr++;
}

void display(QUEUE *t)
{
    int i = t->fr;
    if(t->rr < t->fr)
        printf("\nEmpty Queue\n");
    else 
    {
        printf("\nQueue Data  : \t");
        while(i <= t->rr)
        {
            printf("%d\t", t->arr[i]);
            i++;
        }

    }
}

int main()
{
    int opt, d;
    QUEUE p;
    init(&p);
    while(1)
    {
        printf("\nMenue\n1. Insert\n2. Remove\n3. Display\n4. isFull\n5. isEmpty\n6. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 5)
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
            case 4:
                printf("%s", (p.rr == M - 1 ? "\nQue is Full" : "\nQue is not Full")); break;
            case 5:
                printf("%s", (p.rr == p.fr ? "\nQue is Empty" : "\nQue is not empty")); break;
                
        }
    }
}