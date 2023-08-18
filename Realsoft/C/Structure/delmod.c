#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int no;
    double mrk;
    char nm[50];
}student;

int main()
{
    student p;
    printf("\nEnter Roll No : ");
    scanf("%d", &p.no);
    printf("\nEnter Marks : ");
    scanf("%lf", &p.mrk);
    printf("\nEnter Name : ");
    scanf("%lf", &p.nm);
    return 0;
}
 