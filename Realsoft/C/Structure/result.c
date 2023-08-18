#include <stdio.h>

struct result
{
    int rno;
    int mrk[5];
};

int main()
{
    int i = 0, tot = 0;
    struct result p;
    printf("\nEnter Roll No : ");
    scanf("%d", &p.rno);
    printf("\nEnter Marks\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &p.mrk[i]);
    
    printf("\nRoll No : %d\n\nMarks \n", p.rno);
    for(i = 0; i < 5; i++) {
        printf("%4d", p.mrk[i]);
        tot += p.mrk[i];
    }
    printf("\nTotal : %d", tot);
    return 0;
}