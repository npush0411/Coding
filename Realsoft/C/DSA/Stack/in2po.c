#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct stack {
    int top;
    char opr[50];
}s;

char istr[100];
char post_str[100];

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
void int2po()
{
    int i = 0, j = 0;
    char ch;
    s.top = -1;
    while(istr[i] != '\0')
    {
        if(isalpha(istr[i]))
            post_str[j++] = istr[i];
        else
        {
            while(!empty() && preced(s.opr[s.top], istr[i]))
            {
                ch = s.opr[s.top];
                pop();
                post_str[j++] = ch;
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
        post_str[j++] = s.opr[s.top];
        pop();
    }
    post_str[j] = '\0';
}

int main()
{
    printf("\nEnter Infix String : ");
    scanf("%s", istr);
    int2po();
    printf("\nPostfix String \t %s", post_str);
    return 0;
}