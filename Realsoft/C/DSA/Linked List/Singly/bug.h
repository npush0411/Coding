#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
features->
   -addition of new student record 
   -modiificattion of existing student record 
   -deletion of existing student record 
   -display of all student records
   -condition-
   -roll unique 
   -marks must be in the range 0-100
*/

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

typedef struct slist
{
    NODE *st;
    int cnt;
}SLIST;


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


//fn to search namewise 
NODE * serachnm(SLIST *t,char *p)
{
    NODE *a = t->st;
    while(a!=NULL)
    {
        if(strcmp(((a->data).nm), p)==0)
          break;
          a=a->next;
    }
}


//function to add new record 
void add(SLIST*t)
{
    NODE *a;
    int no;
    printf("\n Enter Roll No:");
    scanf("%d",&no);
    a=search(t,no);
    if(a!=NULL)
    {
       printf("\n Record Exists\n:");
       return;
    }
    a=(NODE*)malloc(sizeof(NODE));
    (a->data).no = no;
    printf("\n Name:");
    scanf("%s", (a->data).nm);
    printf("\n Marks:");
    scanf("%d",&(a->data).mrk);
    a->next=t->st;
    t->st=a;
}

//function to modify

void modify(SLIST*t)
{
    NODE*a;
    int no;
    printf("\n Enter Roll No:");
    scanf("%d",&no);
    a=search(t,no);
    if(a==NULL)
    {
        printf("\n Record Not Exist\n");
        return;
    }
    (a->data).no=no;
    printf("\n Name :");
    scanf("%s",(a->data).nm);
    printf("\n marks:");
    scanf("%d",&(a->data).mrk);
}

void del(SLIST*t)
{
    NODE*a,*b,*c;
    int no;
    printf("\n Enter Roll No:");
    scanf("%d",&no);
    a=search(t,no);
    if(a==NULL)
    {
        printf("\n Record Not Exists\n");
        return;
    }
    if(a==t->st)
      t->st=a->next;
    else
    {
       for(b=t->st;b!=a;b=b->next)
       c=b;
       c->next=a->next;
    }
    free(a);
}

void display(SLIST*t)
{
    NODE*a=t->st;
    if(t->st==NULL)
      printf("\n Empty List:");
    else
    {
        printf("\n Student Data:");
        while(a!=NULL)
        {
              printf("\n %d\t%-15s\t%d",(a->data).no,(a->data).nm,(a->data).mrk);
              a=a->next;
        }
    }
    printf("\n");
    
}

//fn to sort studentlist via roll no


void sortNo(SLIST*t)
{
    NODE*a=t->st,*b,*c;
    STU s;
    if(t->st==NULL)
      return;
    while (a->next!=NULL)
    {
        b=a;
        c=a->next;
        while(c!=NULL)
        {
            if((c->data).no < (b->data).no)
              b=c;
              c=c->next;

        }
        if(a!=b)
        {
              s=a->data;
              a->data=b->data;
              b->data=s;

        }
        a=a->next;
    }
    
}


//fn to by name //sorting roll name____ wise

void sortNm(SLIST*t)
{
    NODE*a=t->st,*b,*c;
    STU s;
    if(t->st==NULL)
      return;
    while(a->next!=NULL)
    {
        b=a;
        c=a->next;
        while(c!=NULL)
        {
            if(strcmp((c->data).nm,(b->data).nm)<0)
            b=c;
            c=c->next;
        }
        if(a!=b)
        {
            s=a->data;
            a->data=b->data;
            b->data=s;

        }
        a=a->next;
    }
    
}


//programme to write student list to binary file stu.dat

void toFile(SLIST*t)
{
     NODE*a=t->st;
     FILE*fs;
     STU s;
     if(t->st==NULL)
       return;
     fs=fopen("stu.dat","wb");
     while(a!=NULL)
     {
        s=a->data;
        fwrite(&s,sizeof(STU),1,fs);
        a=a->next;
     }
     fclose(fs);
     return;
}


//fn to build list from file

void fromFile(SLIST*t)
{
    NODE*a=t->st,*b;
    FILE*fs;
    STU s;
    fs=fopen("stu.dat","rb");
    if(fs==NULL)
      return;
    while(t->st!=NULL)
    {
        t->st=a->next;
        free(a);
        a=t->st;

    }
    while(1)
    {
        fread(&s,sizeof(STU),1,fs);
        if(feof(fs))
          break;
        a=(NODE*)malloc(sizeof(NODE));
        a->data=s;
        a->next=t->st;
        t->st=a;
    }
}
