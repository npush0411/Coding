#include <stdio.h>

struct student
{
    int no;
    char nm[50];
    double mrk;
};

int main()
{
    struct student p;
    struct student *q = &p;
    printf("\nEnter Roll No : ");
    scanf("%d", &q->no);
    printf("\nEnter Name : ");
    scanf("%s", q->nm);
    printf("\nEnter Average : ");
    scanf("%lf", &q->mrk);
    
    printf("\nRoll No : %d\n\nName : %s\n\nAverage : %3.3lf\n\n", q->no, q->nm, q->mrk);

    return 0;
}