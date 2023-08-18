#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    int rno;//roll no must be unique
    int tno;//trade id must be from trade.dat file
    int cno;//city number
    char nm[15];
    int state;//0-deleted, 1-valid
}STU;

typedef struct trade
{
    int tno;//must be unique
    char tnm[15];
    int tstate;//0-deleted,1-valid

}TRD;

typedef struct city
{
    int cno;
    char cnm[15];
    int cstate;
}CTY;
FILE *fs;//stu.dat
FILE *ft;//trade.dat
FILE *fc;//city.dat
STU s;
TRD t;
CTY c;


//functn to search trd record
int tsearch(int no)
{
    int pos=0;
    rewind(ft);
    while(1)
    {
        fread(&t,sizeof (TRD),1,ft);
        if(feof(ft));
        {
         pos=-1;
        break;

        }
        if(t.tno==no)
            break;
        pos=ftell(ft);

    }
    return pos;
}

//function to add new trd type record
void tadd()
{
    int no,pos;
    printf("\nTrade ID: ");
    scanf("%d",&no);
    if(no<=0)
    {
        printf("\n Invalid");
        return;

    }
    pos=tsearch(no);
    if(pos>=0)
    {
        printf("\n Record exists");
        return;
    }
    t.tno=no;
    printf("\n Trade Name: ");
    scanf("%s",t.tnm);
    t.tstate=1;
    fwrite(&t,sizeof(TRD),1,ft);
    printf("\n Record Added");
    return;

}




//function to modify existing trd type record
void tmod()
{
    int no,pos;
    printf("\nTrade ID:");
    scanf("%d",&no);
    if(no<=0)
    {
        printf("\n Invalid");
        return;
    }
    pos=tsearch(no);
    if(pos==-1||t.tstate==0)
    {
        printf("\n Record Not Exists");
        return;

    }
    t.tno=no;
    printf("\n Trade Name: ");
    scanf("%s",t.tnm);
    t.tstate=1;
    fseek(ft,pos,SEEK_SET);
    fwrite(&t,sizeof(TRD),1,ft);
    printf("\n Record Modified");
    return;
}



//functn to delete TRD type records
void tdel()
{
    int no,pos;
    printf("\nTrade Id: ");
    scanf("%d",&no);
    if(no<=0)
    {
        printf("\n Valid");
        return;

    }
    pos=tsearch(no);
    if(pos=-1||t.tstate==0)
    {
        printf("\n Record does not exist");
        return;
    }
    fseek(ft,pos,SEEK_SET);
    fwrite(&t,sizeof(TRD),1,ft);
    printf("\n Record Deleted");
    return;
}




//function to display Trd type record

void tdisplay()
{
    rewind(ft);
    printf("\n Trade Data\n");
    while(1)
    {
        fread(&t,sizeof(TRD),1,ft);
        if(feof(ft))
            break;
        printf("\n %5d %-15s %5d",t.tno,t.tnm,t.tstate);
    }
    return;
}



//function fot tmenu
void tmenu()
{
    int opt,no,pos;
    while(1)
    {
        printf("\n Trade Menu\n 1.Add\n 2.Mod \n 3.del\n 4.display\n 5.search\n 6.back\n option: ");
        scanf("%d",&opt);
        if(opt>5)
            break;
        switch(opt)
        {
        case 1:
            tadd();break;
        case 2:
            tmod();break;
        case 3:
            tdel();break;
        case 4:
            tdisplay();break;
        case 5:
            printf("\n Trade No: ");
            scanf("%d",&no);
            pos=tsearch(no);
            if(pos==-1)
                printf("\nNot found");
            else{
                printf("\n Record Found\n");
                printf("\n %5d %-15s %5d",t.tno,t.tnm,t.tstate);

            }
        }
    }
    return;
}

//void main()
//{
  // int opt;
   //ft=fopen("trd.dat","r+b");
   //if(ft==NULL)//file open operation failed
   //{
     //  ft=fopen("trd.dat","wb");
       //fclose(ft);
       //ft=fopen("trd.dat","r+b");

   //}
   //tmenu();
   //fclose(ft);
   //return;
//}




//functn to search trd record
int csearch(int no)
{
    int pos=0;
    rewind(fc);
    while(1)
    {
        fread(&c,sizeof (CTY),1,fc);
        if(feof(fc))
        {
         pos=-1;
        break;

        }
        if(c.cno==no)
            break;
        pos=ftell(fc);

    }
    return pos;
}

//function to add new trd type record
void cadd()
{
    int no,pos;
    printf("\nCITY ID: ");
    scanf("%d",&no);
    if(no<=0)
    {
        printf("\n Invalid");
        return;

    }
    pos=csearch(no);
    if(pos>=0)
    {
        printf("\n Record exists");
        return;
    }
    c.cno=no;
    printf("\n City Name: ");
    scanf("%s",c.cnm);
    c.cstate=1;
    fwrite(&c,sizeof(CTY),1,fc);
    printf("\n Record Added");
    return;

}




//function to modify existing trd type record
void cmod()
{
    int no,pos;
    printf("\nCity ID:");
    scanf("%d",&no);
    if(no<=0)
    {
        printf("\n Invalid");
        return;
    }
    pos=csearch(no);
    if(pos==-1||c.cstate==0)
    {
        printf("\n Record Not Exists");
        return;

    }
    c.cno=no;
    printf("\n City Name: ");
    scanf("%s",c.cnm);
    c.cstate=1;
    fseek(ft,pos,SEEK_SET);
    fwrite(&c,sizeof(CTY),1,fc);
    printf("\n Record Modified");
    return;
}



//functn to delete TRD type records
void cdel()
{
    int no,pos;
    printf("\nCity Id: ");
    scanf("%d",&no);
    if(no<=0)
    {
        printf("\n Valid");
        return;

    }
    pos=csearch(no);
    if(pos=-1||c.cstate==0)
    {
        printf("\n Record does not exist");
        return;
    }
    fseek(fc,pos,SEEK_SET);
    c.cstate=0;
    fwrite(&c,sizeof(CTY),1,fc);
    printf("\n Record Deleted");
    return;
}




//function to display Trd type record

void cdisplay()
{
    rewind(fc);
    printf("\n City Data\n");
    while(1)
    {
        fread(&c,sizeof(CTY),1,fc);
        if(feof(fc))
            break;
        printf("\n %5d %-15s %5d",c.cno,c.cnm,c.cstate);
    }
    return;
}



//function fot tmenu
void cmenu()
{
    int opt,no,pos;
    while(1)
    {
        printf("\n City Menu\n 1.Add\n 2.Mod \n 3.del\n 4.display\n 5.search\n 6.back\n option: ");
        scanf("%d",&opt);
        if(opt>5)
            break;
        switch(opt)
        {
        case 1:
            cadd();break;
        case 2:
            cmod();break;
        case 3:
            cdel();break;
        case 4:
            cdisplay();break;
        case 5:
            printf("\n City No: ");
            scanf("%d",&no);
            pos=csearch(no);
            if(pos==-1)
                printf("\nNot found");
            else{
                printf("\n Record Found\n");
                printf("\n %5d %-15s %5d",c.cno,c.cnm,c.cstate);

            }
        }
    }
    return;
}

int main()
{
   int opt;
   int op;
   fc=fopen("cty.dat","r+b");
   if(fc==NULL)//file open operation failed
   {
       fc=fopen("cty.dat","wb");
       fclose(fc);
       fc=fopen("cty.dat","r+b");

   }
   ft=fopen("trd.dat","r+b");
   if(ft==NULL)//file open operation failed
   {
     ft=fopen("trd.dat","wb");
    fclose(ft);
       ft=fopen("trd.dat","r+b");

   }
   while(1)
    {
        printf("\n select file\n 1.city \n 2.student trade\n option: ");
        scanf("%d",&op);
        if(op>2)
            break;
        switch(op)
        {
        case 1:
            cmenu();break;
        case 2:
            tmenu();break;
        }
    }
    fclose(fc);
   fclose(ft);

   return 0;
}