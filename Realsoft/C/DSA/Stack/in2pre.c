//Program to convert infix expression to equivalent prefix expression
#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct stack {
    int top;
    char opr[50];
}s;

char istr[100];
char pre_str[100];

void push(char ch)
{
    s.top++;
    s.opr[s.top] = ch;
}

void pop()
{
    s.top--;
}

int empty()
{
    return (s.top == -1);
}

int preced(char stktop, char opr)
{
    return stktop != '(' && opr == ')';
}

//Function to convert infix to postfix
void in2po()
{
    int i = 0, j = 0;
    char ch;
    s.top = -1;
    while(istr[i] != '\0')
    {
        if(isalpha(istr[i]))
            pre_str[j++] = istr[i];
        else
        {
            while(!empty() && preced(s.opr[s.top], istr[i]))
            {
                ch = s.opr[s.top];
                pop();
                pre_str[j++] = ch;
            }
            if(empty() || istr[i] != ')')
                push(istr[i]);
            else
                pop();
        }
        i++;
    }
    while(!empty())
    {
        pre_str[j++] = s.opr[s.top];
        pop();
    }
    pre_str[j] = '\0';
}

void reverse(char *a)
{
    int i = 0, j = strlen(a) - 1; char ch;
    while(i < j)
    {
        ch = a[i];
        a[i] = a[j];
        a[j] = ch;
        i++; j--;
    }
    
}

void replace(char *a)
{
    int i = 0;
    while(a[i] != '\0')
    {
        if(a[i] == '(')
            a[i] = ')';
        else
            if(a[i] == ')')
                a[i] = '(';
        i++;
    }
    
}

void in2pre()
{
    reverse(istr);
    replace(istr);
    in2po();
    reverse(pre_str);
}


int main()
{
    printf("\nEnter Infix : ");
    scanf("%s", istr);
    in2pre();
    printf("\nPrefix : %s", pre_str);
}
