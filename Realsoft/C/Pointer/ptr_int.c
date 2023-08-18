#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration of varialbles 
    int i, j, tot;
    //nos to store no. subjects student appearing
    //student no. is fixed to 5
    int nos[5];
     
    int *mrk[5];
    //loop for inputing the array elements
    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i);
        printf("\nEnter Subject Count");
        scanf("%d", (nos+i));
        *(mrk+i) = (int *)malloc(*(nos + i)*sizeof(int));
        printf("\nEnter Marks : ");
        for(j = 0; j < *(nos + i); j++)
            scanf("%d", ((*mrk + i) + j));
    }
    printf("\nResult\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d \n Marks \n", i);
        for(j = tot = 0; j < *(nos+i); j++)
        {
            printf("%4d", *(*(mrk + i) + j)); 
            tot += *((*(mrk + i) + j));
            free(*(mrk + i) + j);
        }
        printf("\n Total : %d", tot);
    }
    return 0;
}