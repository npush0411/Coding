//Array implementation of stack
#include <stdio.h>

#define M 5

typedef struct stack
{
    int top;
    int arr[M];
}STK;

void init(STK *t)
{
    t->top = -1;
}

void push(STK *t, int d)
{
    if(t->top == M-1)
        printf("\nOverflow");
    else    
        t->arr[++t->top] = d;
}

int isEmpty(STK *t)
{
    return (t->top == -1);
}

void pop(STK *t)
{
    if(isEmpty(t))
        printf("\nUnderFlow");
    else
        t->top--;
}

void display(STK *t)
{
    int i = t->top;
    if(isEmpty(t))
        printf("\nEmpty Stack");
    else
    {
        printf("\nStack Data\n");
        while(i >= 0)
        {
            printf("%4d", t->arr[i]);
            i--;
        }
    }
}

int main()
{
    int opt, d;
    STK p;
    init(&p);
    while(1)
    {
        printf("\nStack Menue\n1. Push\n2. Pop\n3. Display\n4. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 3)
            break;
        switch(opt)
        {
            case 1:
                printf("\nEnter No : ");
                scanf("%d", &d);
                push(&p, d);
                break;
            case 2:
                pop(&p);
                break;
            case 3:
                display(&p); break;
        }
    }
    return 0;
}