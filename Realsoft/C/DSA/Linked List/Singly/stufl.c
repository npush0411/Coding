#include <stdio.h>
#include "slist.h"
#include <string.h>

void toFile(SLIST *t)
{
    NODE *a = t->st;
    FILE *fs;   STU s;
    if(t->st == NULL)
        return;
    fs = fopen("stu.dat", "wb");
    while(a != NULL)
    {
        s = a->data;
        fwrite(&s, sizeof(STU), 1, fs);
        a = a->next;
    }
    fclose(fs);
}