#include <stdio.h>
typedef struct student
{
	int rno;
	int cno;
	int tno;
	char nm[15];
	int state;
}STU;

typedef struct city
{
	int cno;
	char cnm[15];
	int state;
}CTY;

typedef struct trade
{
	int tno;
	char tnm[15];
	int state;
}TRD;
FILE*fs;
FILE*ft;
FILE*fc;
STU s;
TRD t;
CTY c;

//fn to serach TRD record return -1,if not found
int tsearch( int no)
{
	int pos=0;
	rewind(ft);
	while(1)
	{
		fread(&t,sizeof(TRD),1,ft);
		   if(feof(ft))
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
//function To add New TRD type Record
void tadd()
{
	int no,pos;
	printf("\n Trade ID:");
	scanf("%d",&no);
	if(no<=0)
	 {
	 	printf("\nInvalid");
	 	return;
	 }
	 pos=tsearch(no);
	 if(pos>=0)
	 {
	 	printf("\nRecord Exists");
	 	return;
	 }
	 t.tno=no;
	 printf("\nTrade Name:");
	 scanf("%s",t.tnm);
	 t.state=1;
	 fwrite(&t,sizeof(TRD),1,ft);
	 printf("Record created successfully");
	 return ;
}
void tmod()
{
	int no,pos;
	printf("\n Trade ID:");
	scanf("%d",&no);
	if(no<=0)
	 {
	 	printf("\nInvalid");
	 	return;
	 }
	 pos=tsearch(no);
	 if(pos==-1||t.state==0)
	 {
	 	printf("\nRecord not exist");
	 	return;
	 }
	 printf("\ntrade Name:");
	 scanf("%s",t.tnm);
	 t.state=1;
	 fseek(ft,pos,SEEK_SET);// Shifts file pointer to begin of file
	 fwrite(&t,sizeof(TRD),1,ft);
	 printf("\nRecord modified");
	 return;
}
void tdel()
{
	int no,pos;
	printf("\n Trade ID:");
	scanf("%d",&no);
	if(no<=0)
	 {
	 	printf("\nInvalid");
	 	return;
	 }
	 pos=tsearch(no);
	 if(pos==-1||t.state==0)
	 {
	 	printf("\nRecord not exist");
	 	return;
	 }
	 
	 t.state=0;
	 fseek(ft,pos,SEEK_SET);
	 fwrite(&t,sizeof(TRD),1,ft);
	 printf("\nRecord deleted");
	 return;
}
// Function to display Trade Records
void tdisplay()
{
	rewind(ft);
	printf("\nTrade data\n");
	while(1)
	{
	   fread(&t,sizeof(TRD),1,ft);
		if(feof(ft))
		 break;
		 if(t.state > 0)
		 	printf("\n %5d %-15s %5d",t.tno,t.tnm,t.state);
	}
	return;
}
//MENU
void tmenu()
{
int opt,no,pos;
while(1)
{
	printf("\nTrade Menu\n1.add\n2.mod\n3.del\n4.display\n5.search\n6.back\nOption:");
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
		   printf("\nTrade No:");
		   scanf("%d",&no);
		   pos=tsearch(no);
		   if(pos==-1)
		    printf("Not Found");
			else
			{
				printf("\nRecord found.\n");
				printf("\n %5d %-15s %d",t.tno,t.tnm,t.state);
				 } 	
	 }
}
}

//fn to serach TRD record return -1,if not found
int csearch( int no)
{
	int pos=0;
	rewind(fc);
	while(1)
	{
		fread(&c,sizeof(CTY),1,fc);
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
//function To add New TRD type Record
void cadd()
{
	int no,pos;
	printf("\n City ID:");
	scanf("%d",&no);
	if(no<=0)
	 {
	 	printf("\nInvalid");
	 	return;
	 }
	 pos=csearch(no);
	 if(pos>=0)
	 {
	 	printf("\nRecord Exists");
	 	return;
	 }
	 c.cno=no;
	 printf("\nCity Name:");
	 scanf("%s",c.cnm);
	 c.state=1;
	 fwrite(&c,sizeof(CTY),1,fc);
	 printf("Record created successfully");
	 return ;
}
void cmod()
{
	int no,pos;
	printf("\nCity id :");
	scanf("%d",&no);
	if(no<=0)
	 {
	 	printf("\nInvalid");
	 	return;
	 }
	 pos=csearch(no);
	 if(pos==-1||c.state==0)
	 {
	 	printf("\nRecord not exist");
	 	return;
	 }
	 printf("\nCity Name:");
	 scanf("%s",c.cnm);
	 c.state=1;
	 fseek(fc,pos,SEEK_SET);// Shifts file pointer to begin of file
	 fwrite(&c,sizeof(CTY),1,fc);
	 printf("\nRecord modified");
	 return;
}
void cdel()
{
	int no,pos;
	printf("\n City ID:");
	scanf("%d",&no);
	if(no<=0)
	 {
	 	printf("\nInvalid");
	 	return;
	 }
	 pos=csearch(no);
	 if(pos==-1||c.state==0)
	 {
	 	printf("\nRecord not exist");
	 	return;
	 }
	 
	 c.state=0;
	 fseek(fc,pos,SEEK_SET);
	 fwrite(&c,sizeof(CTY),1,fc);
	 printf("\nRecord deleted");
	 return;
}

// Function to display Trade Records
void cdisplay()
{
	rewind(fc);
	printf("\nCity data\n");
	while(1)
	{
	   fread(&c,sizeof(CTY),1,fc);
		if(feof(fc))
		 break;
		 if(c.state > 0)
		 	printf("\n %5d %-15s %5d",c.cno,c.cnm,c.state);
	}
	return;
}
//MENU
void cmenu()
{
int opt,no,pos;
while(1)
{
	printf("\nCity Menu\n1.add\n2.mod\n3.del\n4.display\n5.search\n6.back\nOption:");
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
		   printf("\nCity No:");
		   scanf("%d",&no);
		   pos=csearch(no);
		   if(pos==-1)
		    printf("Not Found");
			else
			{
				printf("\nRecord found.\n");
				printf("\n %5d %-15s %d",c.cno,c.cnm,c.state);
				 } 	
	 }
}
}
int ssearch(int no)
{
	int pos=0;
	rewind(fs);
	while(1)
	{
		fread(&s,sizeof(STU),1,fs);
		if(feof(fs))
		{
		 pos=-1;
		 break;}//record not found
		 if(s.rno==no)
		  break;
	}
	pos=ftell(fs);
	return pos;
	
}
//function to add new studen t record
void sadd()
{
	int pos,no,tno,cno;
	printf("Enter roll no:");
	scanf("%d",&no);
	pos=ssearch(no);
	if(pos>0)
	  {
	  printf("\nRecord exist");
	  return;
      }
      s.rno=no;
      printf("student name:");
      scanf("%s",s.nm);
      printf("Enter trade id:");
      scanf("%d",&tno);
      pos=tsearch(tno);
      if(pos==-1)
      {
      	printf("Invalid trade no.");
      	return;
	  }
	  if(t.state==0)
	  {
	  	printf("Invalid trade");
	  	return;
	  }
      s.tno=tno;
      printf("Enter city id");
      scanf("%d",&cno);
      pos=csearch(no);
      if(pos==-1)
      {
      	printf("Invalid city id");
      	return;
	  }
	  if(c.state==0)
	  {
	  	printf("invalid city id");
	  	return;
	  }
	  s.cno=cno;
	  s.state=1;
	  fwrite(&s,sizeof(fs),1,fs);
	  printf("\nStudent record inserted");
	  
}

//function to add new studen t record
void smod()
{
	int pos,no,tno,cno,rpos;
	printf("Enter roll no:");
	scanf("%d",&no);
	pos=ssearch(no);
	if(pos==-1)
	  {
	  printf("invalid roll no");
	  return;
      }
      if(s.state==0)
      {
      	printf("record deleted cant modify");
      	return;
	  }
      s.rno=no;
      printf("student name:");
      scanf("%s",s.nm);
      printf("Enter trade id:");
      scanf("%d",&tno);
      rpos=tsearch(tno);
      if(rpos==-1)
      {
      	printf("Invalid trade no.");
      	return;
	  }
	  if(t.state==0)
	  {
	  	printf("Invalid trade");
	  	return;
	  }
      s.tno=tno;
      printf("Enter city id");
      scanf("%d",&cno);
      rpos=csearch(no);
      if(rpos==-1)
      {
      	printf("Invalid city id");
      	return;
	  }
	  if(c.state==0)
	  {
	  	printf("invalid city id");
	  	return;
	  }
	  s.cno=cno;
	  s.state=1;
	  fwrite(&s,sizeof(fs),1,fs);
	  printf("\nStudent record inserted");
	  fseek(fs,pos,SEEK_SET);
	  fwrite(&s,sizeof(STU),1,fs);
	  printf("Record modified");
	  
}
void sdel()
{
	int no,pos;
	printf("Enter roll no");
	scanf("%d",&no);
	pos=ssearch(no);
	if(pos==-1);
	{
		printf("record not found");
		return;
	}
	if(s.state==0)
	{
		printf("Record delelted");
		return;
	}
	s.state=0;
	fseek(fs,pos,SEEK_SET);
	fwrite(&s,sizeof(STU),1,fs);
}
void display(int flg,int no)
{
	int cpos,tpos;
	rewind (fs);
	switch (flg)
	{
		case 0:
			printf("\nstudent record");break;
		case 1:
		  printf("\ntradewise record");break;
		  case 2:
		  printf("\ncitywise record");break;	
	}
	while(1)
	{
		fread(&s,sizeof(STU),1,fs);
		if(feof(fs))
		 break;
		 cpos=csearch(s.cno);
		 tpos=tsearch(s.tno);
		 if((flg==1&&s.tno==no)||(flg==2&&s.cno==no)||(flg==0))
		 {
		 	printf("\n%4d %-15s %-15s %-15s %d",s.rno,s.nm,t.tnm,c.cnm,s.state);
		 }
	}
}
void smenu()
{
	int no,opt,pos;
	while(1)
	{
		printf("\nStudent Menu\n1.add\n2.mod\n3.Del\n4.display all\n5.display tradewise\n6.display citywise\n7.exit\n");
		printf("Enter option:");
		scanf("%d",&opt);
		if(opt > 6)
			break;
		switch(opt)
		{
			case 1:
				sadd();break;
			case 2:
				smod();break;
			case 3:
			   	sdel();break;
			case 4:
				display(0,0);break;
			case 5:
				printf("Trade ID:");
				scanf("%d",&no);
				pos=tsearch(no);
				if(pos>=0&&t.state==1)
				 {
				 	display(1,no);
				 	break;
				}
				case 6:
				printf("\nCity ID:");
				scanf("%d",&no);
				pos=csearch (no);
				if(pos>=0&&c.state==1)
				{
					display (2,no);
					break;
				 } 	
				 		
				
		}
	}
}

int main()
{
	int opt;
	ft=fopen("trd.dat","r+b");
	if(ft==NULL)
	{
		ft=fopen("trd.dat","wb");
		fclose(ft);
		ft=fopen("trd.dat","r+b");
	}

	fc=fopen("city.dat","r+b");
	if(fc==NULL)
	{
		fc=fopen("city.dat","wb");
		fclose(fc);
		fc=fopen("trd.dat","r+b");
	}
	fs=fopen("stu.dat","r+b");
	if(fs==NULL)
	{
		fs=fopen("stu.dat","w+b");
		fclose(fs);
		fs=fopen("stu.dat","r+b");
	}
	while(1)
	{
		printf("\nMenu\n1.trade\n2.city\n3.student\n4.exit\noption:");
		scanf("%d",&opt);
		if(opt>3)
		 break;
		 switch(opt)
		 {
		 	case 1:
		 		tmenu();break;
		 		case 2:
		 			cmenu();break;
		 			case 3:
		 				smenu();break;
		 }
		 fclose(ft);
		 fclose(fc);
		 fclose(fs);
	}
	return 0;
}
