//Arrray implementation of stack for type character
#include <stdio.h>
#include <string.h>

#define M 50

typedef struct stck
{
    int top;
    char arr[M];
}CSTK;

void init(CSTK *t)
{
    t->top = -1;
}

void push(CSTK *t, char d)
{
    if(t->top == M-1)
        printf("\nOverflow");
    else
        t->arr[++t->top] = d;
}

int isEmpty(CSTK *t)
{
    return (t->top == -1);
}

char pop(CSTK *t)
{
    return t->arr[t->top--];
}

int main()
{
    char p[50], q[50];
    int i = 0;
    CSTK t;
    init(&t);
    printf("\nEnter String : ");
    gets(p);
    while(p[i] != '\0')
    {
        push(&t, p[i]);
        i++;
    }
    i = 0;
    while(!isEmpty(&t))
        q[i++] = pop(&t);
    q[i] = '\0';
    puts(p);
    puts(q);
    return 0;
}