#include <stdio.h>

typedef struct result
{
    int no;
    int mrk[5];
}RES;
void input (RES *t, int no)
{
    int i = 0;
    t->no = no;    
    printf("\nEnter Marks : ");
    while(i < 5)
    {scanf("%d", &t->mrk[i]); i++; }
  
}

void display(RES *p)
{
    int i = 0, tot = 0;
    printf("\nRoll No: %d", p->no);
    printf("\nMarks\n");
    while (i< 5)
    {
        /* code */
        printf("%4d", p->mrk[i]);
        tot += p->mrk[i];
        i++;
    }
    printf("\nTotal : %d\n\n", tot);
    return ;
}