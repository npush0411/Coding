//create a header file with name slist.h define an data types NODE and SLIST and define fns to manipulate the list

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{//STU data;
    int data;
    struct node*next;
    
}NODE;

typedef struct singlelist
{
    NODE*st;
    int cnt;

}SLIST;

typedef struct student 
{
    int no;
    char nm[50];
    int mrk;

}STU;


void init(SLIST*t)
{
    t->st=NULL;
    t->cnt=0;
}


NODE*createNode(int d)
{
    NODE*a;
    a=(NODE*)malloc(sizeof(NODE));
    a->data=d;
    a->next=NULL;
    return a;
}


//fn to retriev last node

NODE*getlastnode(NODE*a)
{
    while(a->next!=NULL)
    a=a->next;
    return a;
}


void addE(SLIST*t,int d)
{
    NODE*a=createNode(d);
    NODE*b;
    if(t->st==NULL)
    t->st=a;
    else
    {
        b=getlastnode(t->st);
        b->next=a;

    }
    t->cnt=t->cnt+1;
}


//fn to add new NODE at  begin

void addB(SLIST*t,int d)
{
    NODE*a=createNode(d);
    a->next=t->st;
    t->st=a;
    t->cnt=t->cnt+1;
}


//fn to display

void display(SLIST*t)
{
    NODE*a=t->st;
    if(t->st==NULL)
    printf("\n Empty list ");
    else
    {
        printf("\n data\n");
        while(a!=NULL)
        {
            printf("%4d",a->data);
            a=a->next;
        }
    }
}


int count(SLIST*t)
{
    return t->cnt;
}

int sum(SLIST*t)
{
    int tot=0;
    NODE*a=t->st;
    while(a!=NULL)
    {
        tot=tot+a->data;
        a=a->next;
    }
    return tot;
}


//f to delete first node

void delFirst(SLIST *t)
{
    NODE*a=t->st;
    if(t->cnt==0)
    return;
    t->st=a->next;
    free(a);
    t->cnt=t->cnt-1;
}

//fn to delete last node from list

void delLast(SLIST*t)
{
    NODE*a=t->st,*b;
    if(t->cnt==0)
    return;
    if(t->cnt==1)
    delFirst(t);
    else
    {
        while(a->next!=NULL)
        {
            b=a;
            a=a->next;
        }
        b->next=NULL;
        free(a);
        t->cnt=t->cnt-1;
    }
}


//fn to  delete all

//void delAll(SLIST*t)
//{
   // while(t->st!=NULL)
   // delFirst(t);
//}

void delAll(SLIST*t)
{
    NODE*a=t->st;
    while(t->st!=NULL)
    {
        t->st=a->next;
        free(a);
        a=t->st;

    }
    t->cnt=0;
}


//fn to display odd nodes

void odisplay(SLIST*t)
{
    NODE*a=t->st;
    printf("\n data :");
    while(a!=NULL)
    {
        if((a->data)%2==1)
        printf("%4d",a->data);
        //This statement was missing here
        a = a->next;
    }

}

//fn to display even data 

void edisplay(SLIST*t)
{
    NODE*a=t->st;
    printf("\n data \n");
    while(a!=NULL)
    {
        if(a->data%2==0)
        printf("%d",a->data);
        //This was missing here
        a = a->next;
    }
}

//fn to find max

int findmax(SLIST*t)
{
    int data;
    NODE*a=t->st;
    int max=a->data;
    for(a=a->next;a!=NULL;a=a->next)
    {
        if(a->data>max)
        max=a->data;
    }
    return max;

}


//min

int findmin(SLIST*t)
{
    NODE*a=t->st;
    int min=a->data;
    //for(a=a->next;a!=NULL;a->next)
    for(a=a->next;a!=NULL;a =a->next)
    {
        if(a->data<min)
        min=a->data;
    }
    return min;
}

//fn to implement search

NODE*search(SLIST*t,int sv)
{
    NODE*a=t->st;
    while(a!=NULL)
    {
       // if(a->data=sv)
        if(a->data == sv)
            break;
      //  a-a->next;
        a = a->next;
    }
    return a;
}


//fn to implement find and replace


void findReplace(SLIST*t,int sv,int rv)
{
    NODE*a=t->st;
    while(a!=NULL)
    {
        if(a->data==sv)
        a->data=rv;
        a=a->next;
    }
    return ;
}

//fn to reverse linklist

//void fun(SLIST*t)
void reverse(SLIST *t)
{
NODE *a=t->st,*b,*c=NULL;
while(a!=NULL)
{
    b=a;
    a=a->next;
    b->next=c;
    c=b;
}
t->st=c;
return;
}

//fn to odd count
int ocount(SLIST*t)
{
    int cnt=0;
    NODE*a=t->st;
    while(a!=NULL)
    {
        if(a->data%2==1)
        cnt++;
        a=a->next;
    }
    return cnt;
}


//fn to even count 

int ecount(SLIST*t)
{
    int cnt=0;
    NODE*a=t->st;
    while(a!=NULL)
    {
        if(a->data%2==0)
        cnt++;
        a=a->next;

    }
    return cnt;
}

//fn to ordered list

int isOrdered (SLIST*t)
{
    NODE*a=t->st,*b;
   // if(a->next=NULL)
    if(a->next==NULL)
      return 1;
    for(b=a, a=a->next; a!=NULL; b=a,a=a->next)
    {
        if(a->data<b->data)
        break;
    }
    if(a==NULL)
     return 1;
    else
     return 0;
}


//fn to delete ith position NODE


void deliNode(SLIST*t,int pos)
{
    int i=1;
    NODE *a=t->st,*b,*c;
    if(t->st==NULL||pos<1||pos>t->cnt)
    return;
    if(pos==1)
      delFirst(t);
    else
    {
        if(pos==t->cnt)
        delLast(t);
        else
        {
            while(i<pos)
            {
                b=a;
                a=a->next;
                i++;

            }
            c=a->next;
            b->next=c;
            free(a);
            t->cnt--;
        
        }
    }
}


//fn to insert new node before ith position

void insertB(SLIST*t,int pos,int d)
{
    int i=1;
    NODE*a=t->st,*b,*c;
    if(t->st==NULL||pos<1||pos>t->cnt)
    return;
    if(pos==1)
    addB(t,d);
    else
    {
        while(i<pos)
        {
            b=a;
            a=a->next;
            i++;

        }
        c=createNode(d);
        b->next=c;
        //c->next=c; Mistake in maintaining Link
        c->next = a; //next node link should be maintaoned in c;
        t->cnt++;
    }
}


//fn to insert new node after ith pos

void insertA(SLIST*t,int pos,int d)
{
    int i=1;
    NODE*a=t->st,*b,*c;
    if(t->st==NULL||pos<1||pos>t->cnt)
    return;
    if(pos==t->cnt)
    addE(t,d);
    else
    {
        while(i<=pos)
        {
            b=a;
            a=a->next;
            i++;
        }
        c=createNode(d);
        b->next=c;
        c->next=a;
        t->cnt++;
    }
    
}


//fn to convert array to list


void arrayToList(SLIST*t,int *b,int n)
{
    int i=0;
    NODE*a,*c;
    if(t->st!=NULL)
      delAll(t);
    while(i<n)
    {
        a=createNode(b[i]);
        if(t->st==NULL)
        t->st=a;
        else
        c->next=a;
        c=a;
        t->cnt++;
        i++;
        
    }
    
}


//fn to convert list to array

int *listToArray(SLIST*t)
{
    int i=0,n=t->cnt;
    NODE*a=t->st;
    int*b=(int*)malloc(n*sizeof(int));
    while(a!=NULL)
    {
        b[i++]=a->data;
        a=a->next;
    }
    return b;
}

//fn to built list from file

void fromFile(SLIST*t)
{
    FILE *f1;
    int d;
    NODE*a=t->st,*b;
    f1=fopen("list.dat","rb");
    if(f1==NULL)
      return;
    if(t->st!=NULL)
      delAll(t);
    while(1)
    {
        fread(&d,sizeof(int),1,f1);
        if(feof(f1))
          break;
         a =createNode(d);
        
        if(t->st==NULL)
         { t->st=a; b=a;}
        else
        {
          b->next=a;
          b=a;
          t->cnt=t->cnt+1;
        }

    }
    fclose(f1);
    return;
}

//fn to store list data to a file

void toFile(SLIST*t)
{
    FILE*f1;
    int data;
    NODE*a=t->st;
    if(t->st==NULL)
      return;
    f1=fopen("list.dat","wb");
    while(a!=NULL)
    {
        //a=a->data;
        data = a->data;
        fwrite(&data,sizeof(int),1,f1);
        a=a->next;

    }
    fclose(f1);

}

//fn to sort list in ascending order using selection sort 

void sort(SLIST*t)
{
    int tmp;
    NODE *a=t->st,*b,*c;
    if(t->st==NULL)
      return;
    while(a->next!=NULL)
    {
        b=a;
        for(c=b->next;c!=NULL;c=c->next)
        {
            if(c->data<b->data)
              b=c;
        }
        if(a!=b)
        {
            tmp=a->data;
            a->data=b->data;
            b->data=tmp;
        }
        a=a->next;
    }
}

//recursion

void rdisplay(NODE* a)
{
    if(a==NULL)
      return;
    rdisplay(a->next);
    printf("%4d",a->data);
}
























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


/*

//fn to search namewise 

NODE*serachnm(SLIST*t,char *p)
{
    NODE *a=t->st;
    while(a!=NULL)
    {
        if(strcmp((a->data).nm, p)==0)
          break;
          a=a->next;
    }
}


//function to add new record 

void add(SLIST*t)
{
    NODE*a;
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
    (a->data).no=no;
    printf("\n Name:");
    scanf("%s",(a->data).nm);
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
            if((c->data).rno<(b->data).rno)
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
*/