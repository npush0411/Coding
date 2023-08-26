//Evaluation of Postfix Expression
//New Topic - Queue
#include <stdio.h>

struct stack
{
    int top;
    int arr[10];
}s;

void init()
{
    s.top = -1;
}

void push(int d)
{
    s.arr[++s.top] = d;
}

int pop()
{
    return s.arr[s.top--];
}

int isempty()
{
    return (s.top == -1);
}

int comp(int a, int b, char opr)
{
    int res = 0;
    switch(opr)
    {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b; 
            break;
        case '*':
            res = a * b; 
            break;
        case '/':
            res = a / b;
            break;
    }
    return res;
}

int main()
{
    char pstr[50], ch;
    int i, j, a, b, res;
    static int val[26];

    //Asking Expresstion
    //Assumption - UPPERCASE expression
    printf("\nEnter Postfix Expresion : ");
    scanf("%s", pstr);
    
    //Asking for values
    for(i = 0; pstr[i] != '\0'; i++)
    {
        ch = pstr[i];
        if(ch >= 65 && ch <= 90) //to check weather ch is UPPERCASE alphabate
        {
            j = ch - 65;    //To retrive int value of Char
            printf("\nEnter Value for %c : ", ch);
            scanf("%d", &val[j]);
        }
    }

    //Evaluation
    for(i = 0; pstr[i] != '\0'; i++)
    {
        ch = pstr[i];
        if(ch >= 65 && ch <= 90)
        {
            j = ch - 65;
            push(val[j]);
        }
        else
        {
            b = pop();
            a = pop();
            res = comp(a, b, ch);
            push(res);
        }
    }
    res = pop();
    printf("\n\nResult : %d", res);
    return 0;
}