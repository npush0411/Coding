#include <stdio.h>

//Acutal Record
typedef struct student 
{
  int no;
  char nm[50];
  double mrk;
  int flg; //0-Deleted element 1-Valid element
}student;


//Function to input everything
void input(student *p, int n)
{ 
    p->no = n;
    printf("\nName : ");
    scanf("%s", p->nm);
    printf("\nMarks :");
    scanf("%lf", p->mrk);
    p->flg = 1;
}

//Function to display data
void display(student *q)
{
  printf("\n\n--------------------------------------------------------\n");
  printf("\nPRN : %d\nName : %s\nMarks : %lf\nState : %s\n", q->no, q->nm, q->mrk, (q->flg ? "Valid" : "In-Valid"));
}

//function to search for inputed value
int search(student *p, int sno, int rpos)
{
    int i = 0;
    while(i <= rpos)
    {
      if((p+i)->no == sno)
        break;
      i++;
    }
    return (i > rpos) ? -1 : i;
}

//Function to add data to the record
int add(student *p, int rpos)
{
  int n, res;
  printf("\nRoll NO. : ");
  scanf("%d", &n);
  res = search(p, n,rpos);
  if(res >= 0)
    return 0;
  else
  {
    rpos++;
    input((p + rpos), n);
    return 1;
  }
}

//Function to modify record
int modify(student *p, int rpos)
{
  int n, res;
  printf("\nRoll No : ");
  scanf("%d", &n);
  res = search(p, n, res);
  if(res == -1) //Record not found
    return 0;
  else
  {
    if((p + res)->flg == 0)
      return 0;
    input((p+res), n);
    return 1; //record updated successfully
  }
}
int del(student *a, int b)
{
 
}
void diasplayAll(student *a, int n)
{
  int i = 0;
  while(i <= n)
  {
    display(a+i);
    i++;
  }
}
int main()
{
  int opt, lpos = -1, res;
  student p[10];
  while(1)
  {
    printf("\nMenue\n1. Add\n2. Modify\n3. Del\n4. Display All\n5. Search\n6. Exit\nOption :  ");
    scanf("%d", &opt);
    if(opt > 5)
      break;
    switch (opt)
    {
        case 1:
          if(lpos == 9)
            printf("\nOverFlow\n");
          else  
          {
            res = add(p, lpos);
            if(res == 0)
				printf("\nNo Inssertion\n");
			else
			{
				printf("\nRecord Inserted\n");
				lpos++;
			}
          }
		  break;
		case 2:
			if(lpos == -1)			
				printf("\nEmpty List\n");
			else
				res = modify(p, lpos);
				if(res == 0)
					printf("\nNo Modification\n");
				else
					printf("\nRecord Modified\n");
			break;
		case 3:
			if(lpos == -1)			
				printf("\nEmpty List\n");
			else
				res = del(p, lpos);
				if(res == 0)
					printf("\nNo Deletion\n");
				else
					printf("\nRecord Deleted\n");
			break;   
		case 4:
			if(lpos == -1)
				printf("\nEmpty List\n");
			else
				diasplayAll(p, lpos);
			break;
		case 5:
			if(lpos == -1)
				printf("\nEnpty List\n");
			else
			{	
				printf("\nEnter Roll No to Search Record : ");
				scanf("%d", &opt);
				res = search(p, opt, lpos);
				if(res == -1)
					printf("\nRecord Not found");
				else
					display((p + res));
			}
    }
  }
  return 0;
}
