#include <stdio.h>
int main()
{
    FILE* fs;
    int no;
    int mrk;
    char nm[15];
    fs=fopen("swanfile","r");
    if (fs==NULL)
      printf("not found");
    while(1)
    {
      fscanf(fs,"%d %s %d",&no,nm,&mrk);
      if (feof(fs))
        break;
      printf("%4d %-15s %4d",no,nm,mrk);
        
    }
    return 0;
}