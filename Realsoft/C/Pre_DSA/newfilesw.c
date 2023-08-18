#include <stdio.h>
int main()
{
    FILE* fs;
    int no;
    int mrk;
    char nm[15];
    fs=fopen("swanfile.txt","w");
    while(1)
    {
        printf(" roll no:");
        scanf("%d",&no);
        if( no==0)
           break;
        printf("name:");
        scanf("%s",nm);
        printf("marks:");
        scanf("%d",&mrk);
    fprintf(fs,"%d %s %d\n",no,nm,mrk);
    }
    return 0;
}