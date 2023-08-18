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
    printf("\nEnter Roll No : ");
    scanf("%d", &p.no);
    printf("\nEnter Name : ");
    scanf("%s", p.nm);
    printf("\nEnter Average : ");
    scanf("%lf", &p.mrk);
    
    printf("\nRoll No : %d\n\nName : %s\n\nAverage : %3.3lf\n\n", p.no, p.nm, p.mrk);
    return 0;
}