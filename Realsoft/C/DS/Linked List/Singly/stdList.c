/*
    Features -> 
        - Addition of new student record
        - Modification of existing student record
        - deletion of existing student record
        - display of all student records
        - Conditions -
            - Roll Unique
            - Marks must be in the range 0-100
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student
{
    int no;
    char nm[50];
    int mrk;
}STU;

typedef struct node
{
    STU data;
    struct node *next;
}NODE;

typedef struct studentlist
{
    NODE *st;
}SLIST;

void init(SLIST *t)
{
    t->st = NULL;
}

NODE * search(SLIST *t, int no)
{
    NODE *a = t->st;
    while(a != NULL)
    {
        if((a->data).no == no)
            break;
        a = a->next;
    }
    return a;
}

//Function to search namewise
NODE * searchnm(SLIST *t, char *p)
{
    NODE *a = t->st;
    while(a != NULL)
    {
        if(strcmp((a->data).nm, p) == 0)
            break;
        a = a->next;
    }
}

//Function to add new record
void add(SLIST *t)
{
    NODE *a;
    int no;
    printf("\nEnter Roll NO : ");
    scanf("%d", &no);
    a = search(t, no);
    if(a != NULL)
    {
        printf("\nRecord Exists\n");
        return ;
    }
    a = (NODE *)malloc(sizeof(NODE));
    (a->data).no = no;
    printf("\nName : ");
    scanf("%s", (a->data).nm);
    printf("\nMarks : ");
    scanf("%d", &(a->data).mrk);
    a->next = t->st;
    t->st = a;
}

//Function to modify
void modify(SLIST *t)
{
    NODE *a;
    int no;
    printf("\nEnter Roll NO : ");
    scanf("%d", &no);
    a = search(t, no);
    if(a == NULL)
    {
        printf("\nRecord NOT Exists\n");
        return ;
    }
    (a->data).no = no;
    printf("\nName : ");
    scanf("%s", (a->data).nm);
    printf("\nMarks : ");
    scanf("%d", &(a->data).mrk);
}

void del(SLIST *t)
{
    NODE *a, *b, *c;
    int no;
    printf("\nEnter Roll NO : ");
    scanf("%d", &no);
    a = search(t, no);
    if(a == NULL)
    {
        printf("\nRecord NOT Exists\n");
        return ;
    }
    if(a == t->st)
        t->st = a->next;
    else
    {
        for(b = t->st; b != a; b = b->next)
            c = b;
        c->next = a->next;
    }
    free(a);
}

void display(SLIST *t)
{
    NODE *a = t->st;
    if(t->st == NULL)
        printf("\nEmpty List");
    else    
    {
        printf("\nStudent Data\n");
        while(a != NULL)
        {
            printf("\n%d\t%-15s\t%d", (a->data).no, (a->data).nm, (a->data).mrk);
            a = a->next;
        }
    }
    printf("\n");
}

void sortNo(SLIST *t)
{
    NODE *a = t->st, *b, *c;
    STU s;
    if(t->st == NULL)
        return;
    while(a->next != NULL)
    {
        b = a;
        c = a->next;
        while(c != NULL)
        {
            if((c->data).no < (b->data).no)
                b = c;
            c = c->next;
        }
        if(a != b)
        {
            s = a->data;
            a->data = b->data;
            b->data = s;
        }
        a = a->next;
    }
}

void sortNm(SLIST *t)
{
    NODE *a = t->st, *b, *c;
    STU s;
    if(t->st == NULL)
        return;
    while(a->next != NULL)
    {
        b = a;
        c = a->next;
        while(c != NULL)
        {
            if(strcmp((c->data).nm, (b->data).nm))
                b = c;
            c = c->next;
        }
        if(a != b)
        {
            s = a->data;
            a->data = b->data;
            b->data = s;
        }
        a = a->next;
    }
}

//Program to write record to file
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

void fromFile(SLIST *t)
{
    NODE *a = t->st, *b;
    FILE *fs;
    STU s;
    fs = fopen("stu.dat", "rb");
    if(fs == NULL)
        return;
    while(t->st != NULL)
    {
        t->st = a->next;
        free(a);
        a = t->st;
    }
    while(1)
    {
        if(feof(fs))
            break;
        a = (NODE *)malloc(sizeof(NODE));
        a->data = s;
        a->next = t->st;
        t->st = a;
    }
}

int main()
{
    int opt;
    SLIST *p;
    init(&p);
    while(1)
    {
        printf("\nMenue\n1. ADD\n2. Modify\n3. Delete\n4. Display\n5. SortNo\n6. Sort Name\n7. To File\n8. From File\n7. Exit\nOption : ");
        scanf("%d", &opt);
        if(opt > 8)
            break;
        switch (opt)
        {
            case 1:
                add(&p); break;
            case 2:
                modify(&p); break;
            case 3:
                del(&p); break;
            case 4:
                display(&p); break;
            case 5:
                sortNo(&p); break;
            case 6:
                sortNm(&p); break;
            case 7:
                toFile(&p);break;
            case 8:
                fromFile(&p); break;
        }
    }
    return 0;
}