#include <stdio.h>

struct marks
{
    int rno;
    int *ptr;
    int nos;
};

int main()
{
    int i = 0, tot = 0;
    struct marks m;
    printf("\nEnter Roll No : ");
    scanf("%d", &m.rno);
    printf("\nEnter Subject Count\n");
    scanf("%d", &m.nos);
    m.ptr = (int *)malloc(m.nos*sizeof(int));
    for(i = 0; i < m.nos; i++)
        scanf("%d", (m.ptr + i));
    
    printf("\nRoll No : %d\n\nMarks \n", m.rno);
    for(i = 0; i < 5; i++) {
        printf("%4d", *(m.ptr + i));
        tot += *(m.ptr + i);
    }
    printf("\nTotal : %d", tot);
    free(m.ptr);
    return 0;
}