#include <stdio.h>

typedef struct marks
{
    int no;
    int mrk[5];
}MARKS;

typedef struct result
{
    int no;
    double avg;
}RES;

int main()
{
    MARKS p;
    RES q; int i = 0, tot = 0;
    printf("\nEnter Roll No : ");
    scanf("%d", &p.no);
    printf("\nMarks\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", p.mrk[i]);
        tot += p.mrk[i];
    }
    q.avg = tot/(double)5;
    q.no = p.no;
    printf("\n\nMarks Data\n\n");
    printf("\nRoll No : %d", q.no);
    printf("\nMarks\n");
    for(i = 0; i < 5; i++)
        printf("%4d", p.mrk[i]);
    printf("\nTotal : %d", tot);
    printf("\nAverage : %3.3lf", q.avg);
    return 0;
}
