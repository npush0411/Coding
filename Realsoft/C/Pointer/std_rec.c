/*
    Pushkar R Nashikkar
    PO : Program prints marksheet of inputed no of student
         Student having flexible no of subjects
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //s_sub is double pointer (pointer to pointer) pointing to address of no of subjects for particular student
    int n, i = 0, j = 0, tot, *sub, **s_sub; //sub pointer pointing to integers having subject count of students 
    printf("\nEnter Student Count : ");
    scanf("%d", &n);
    sub = (int *)malloc(n*sizeof(int));
    s_sub = (int **)malloc(n*sizeof(int));
    while(i <= n)
    {
        printf("\nStudent %d\nEnter Subject Count : ", (i+1));
        scanf("%d", (sub+i));
        *(s_sub+i) = (int *)malloc(sub[i]*sizeof(int));
        for(j = 0;    j < *(sub+i);    j++)
            scanf("%d", (*s_sub + j));
        i++;
    }
    for(i = 0; i < n; i++)
    {
        printf("\n------------------------------------------------------------------------------\n");
        printf("Student %d Marksheet\n", i);
        for(j = tot = 0; j < *(sub+i); j++)
        {
            printf("%d\t", *(*s_sub + j));
            tot += *(*s_sub + j);
            free(*(s_sub+i));
        }   
        printf("\nTotal : %d\n", tot);
    }
    free(s_sub);
    free(sub);
    return 0;
}