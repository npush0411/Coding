#include <stdio.h>

typedef struct STUdent
{
    int rno;    //roll no (must be Unique)
    int tno;    //Trade ID must be from trade.dat
    int cno;    //City No. 
    char nm[15]; //STUdent name
    int state;  //0- Deleted // 1 - Valid
}STU;

typedef struct trade
{
    int tno;//must be unique
    char tnm[15]; //trade name
    int state;  //0- Deleted // 1 - Valid
}TRD;

typedef struct city
{
    int cno; //City No  
    char cnm[15];   //City Name
    int state; //State
}CTY;
    
FILE *fs; //STU.dat
FILE *ft; //trade.dat
FILE *fc; //city.dat

STU s;
CTY c;
TRD t;

int tsearch(int no)
{
    int pos = 0;
    rewind(ft);
    while (1)
    {
        fread(&t, sizeof(t), 1, ft);
        if(feof(ft)){
            pos = -1;
            break;
            }
        if(t.tno == no)
            break;
        pos = ftell(ft);
    }
    return pos;
}

//Function to add new TRD type record
void tadd()
{
    int no, pos;
    printf("\nTrade ID : ");
    scanf("%d", &no);
    if(no <= 0)
    {
        printf("\nInvalid ID");
        return;
    }
    pos = tsearch(no);
    if(pos >= 0)
    {
        printf("\nRecord Exists");
        return;
    }
    t.tno = no;
    printf("\nTrade Name: ");
    scanf("%s", t.tnm);
    t.state = 1;
    fwrite(&t, sizeof(TRD), 1, ft);
    printf("\nRecord Created Successfully");
    return;
}

//Function to modify existing TRD type record
void tmod()
{ 

    int no, pos;
    printf("\nTrade ID : ");
    scanf("%d", &no);
    if(no <= 0)
    {
        printf("\nInvalid ID");
        return;
    }
    pos = tsearch(no);
    if(pos == -1 || t.state == 0)
    {
        printf("\nRecord Not Exists");
        return;
    }
    t.tno = no;
     printf("\nTrade Name: ");
    scanf("%s", t.tnm);
    t.state = 1;
    fseek(ft, pos, SEEK_SET);
    fwrite(&t, sizeof(TRD), 1, ft);
    printf("\nRecord Modified Successfully");
    return;
}


//Function to delete record
void tdel()
{
    int no, pos;
    printf("\nTrade ID : ");
    scanf("%d", &no);
    if(no <= 0)
    {
        printf("\nInvalid ID");
        return;
    }
    pos = tsearch(no);
    if(pos == -1 || t.state == 0)
    {
        printf("\nrecord Not Exists");
        return;
    }
    t.state = 0;
    fseek(ft, pos, SEEK_SET); //Shifts file pointer(ft) to pos from begin of the file
    fwrite(&t, sizeof(TRD), 1, ft);
    printf("\nRecord Modified Successfully");
    return;
}

//Function to display trade records
void tdisplay()
{
    rewind(ft);
    printf("Trade Data\n");
    while(1)
    {
        fread(&t, sizeof(TRD), 1, ft);  
        if(feof(ft)) break;
        if(t.state > 0)
            printf("\n %5d %-15s %5d", t.tno, t.tnm, t.state);
    }
    return;
}

//Function for trade menue
void tmenue()
{
    int opt, no, pos;
    while(1)
    {
        printf("\nTrade Menue\n1. Add\n2. Mod\n3. Del\n4. Display\n5. Search\n6. Back\nOption : ");
        scanf("%d", &opt);
        if(opt > 5)
            break;
        switch(opt)
        {
            case 1:
                tadd(); break;
            case 2:
                tmod(); break;
            case 3:
                tdel(); break;
            case 4:
                tdisplay(); break;
            case 5: 
                printf("\nTrade No : ");
                scanf("%d", &no);
                pos = tsearch(no);
                if(pos < 0)
                    printf("\nNot Found");
                else{
                    printf("\nRecord Found");
                    printf("\n%5d %-15s %d", t.tno, t.tnm, t.state);
                }
        }
    }
}


//Function to search CTY record -> RETURN -1 if not fount otherwise return begin bite no of found record
int csearch(int no)
{
    int pos = 0;
    rewind(fc);
    while (1)
    {
        fread(&c, sizeof(c), 1, fc);
        if(feof(fc)){
            pos = -1;
            break;
            }

        if(c.cno == no)
            break;
        pos = ftell(fc);
    }
    return pos;
}

//Function to add new CTY type record
void cadd()
{
    int no, pos;
    printf("\nCity ID : ");
    scanf("%d", &no);
    if(no <= 0)
    {
        printf("\nInvalid ID");
        return;
    }
    pos = csearch(no);
    if(pos >= 0)
    {
        printf("\nRecord Exists");
        return;
    }
    c.cno = no;
    printf("\nCity Name: ");
    scanf("%s", c.cnm);
    c.state = 1;
    fwrite(&c, sizeof(CTY), 1, fc);
    printf("\nRecord Created Successfully");
    return;
}

//Function to modify existing CTY type record
void cmod()
{ 

    int no, pos;
    printf("\nCity ID : ");
    scanf("%d", &no);
    if(no <= 0)
    {
        printf("\nInvalid ID");
        return;
    }
    pos = csearch(no);
    if(pos == -1 || c.state == 0)
    {
        printf("\nRecord Not Exists");
        return;
    }
    c.cno = no;
     printf("\nCity Name: ");
    scanf("%s", c.cnm);
    c.state = 1;
    fseek(fc, pos, SEEK_SET);
    fwrite(&c, sizeof(CTY), 1, fc);
    printf("\nRecord Modified Successfully");
    return;
}


//Function to delete record
void cdel()
{
    int no, pos;
    printf("\nCity ID : ");
    scanf("%d", &no);
    if(no <= 0)
    {
        printf("\nInvalid ID");
        return;
    }
    pos = csearch(no);
    if(pos == -1 || c.state == 0)
    {
        printf("\nrecord Not Exists");
        return;
    }
    c.state = 0;
    fseek(fc, pos, SEEK_SET); //Shifts file pointer(fc) to pos from begin of the file
    fwrite(&c, sizeof(CTY), 1, fc);
    printf("\nRecord Modified Successfully");
    return;
}

//Function to display city records
void cdisplay()
{
    rewind(fc);
    printf("City Data\n");
    while(1)
    {
        fread(&c, sizeof(CTY), 1, fc);  
        if(feof(fc)) break;
        if(c.state > 0)
            printf("\n %5d %-15s %5d", c.cno, c.cnm, c.state);
    }
    return;
}

//Function for trade menue
void cmenue()
{
    int opt, no, pos;
    while(1)
    {
        printf("\nCity Menue\n1. Add\n2. Mod\n3. Del\n4. Display\n5. Search\n6. Back\nOption : ");
        scanf("%d", &opt);
        if(opt > 5)
            break;
        switch(opt)
        {
            case 1:
                cadd(); break;
            case 2:
                cmod(); break;
            case 3:
                cdel(); break;
            case 4:
                cdisplay(); break;
            case 5: 
                printf("\nCity No : ");
                scanf("%d", &no);
                pos = csearch(no);
                if(pos < 0)
                    printf("\nNot Found");
                else{
                    printf("\nRecord Found");
                    printf("\n%5d %-15s %d", c.cno, c.cnm, c.state);
                }
        }
    }
}

//Function to search student record
int ssearch(int no)
{
    int pos = 0;
    rewind(fs);
    while(1)
    {
        fread(&s, sizeof(STU), 1, fs);
        if(feof(fs))
        { pos = -1; break;} //-1 Record not found
        if(s.rno == no)
            break;
        pos = ftell(fs);
    }
    return pos;
}

//Function to add new student record
void sadd()
{
    int pos, no, tno, cno;
    printf("\nEnter Roll No : ");
    scanf("%d", &no);
    pos = ssearch(no);
    if(pos >= 0)
    {
        printf("\nRecord Exist");
        return;
    }
    s.rno = no;
    printf("\nStudent Name : ");
    scanf("%s", s.nm);
    printf("\nEnter Trade ID : ");
    scanf("%d", &tno);
    pos = tsearch(tno);
    if(pos == -1)
    {
        printf("\nInvalid Trade No ");
        return ;
    }
    if(t.state == 0)
    {
        printf("\nDeleted Trade");
        return ;
    }
    s.tno = tno;
    printf("\nEnter City ID : ");
    scanf("%d", &cno);
    pos = csearch(cno);
    if(pos == -1)
    {
        printf("\nInvalid City ID");
        return ;
    }
    if(c.state == 0)
    {
        printf("\nDeleted City ID");
        return ;
    }
    s.cno = cno;
    s.state = 1;
    fwrite(&s, sizeof(STU), 1, fs);
    printf("\nStudent record inserted !!");
    return ;
}

//Function to modify the function
void smod()
{
    int pos, no, tno, cno, rpos;
    
    printf("\nEnter Roll No : ");
    scanf("%d", &no);
    
    pos = ssearch(no);
    
    if(pos < 0)
    {
        printf("\nInvalid Roll NO");
        return;
    }
    
    s.rno = no;
    
    if(s.state == 0)
    {
        printf("\nRecord Deleted can not modify");
        return ;
    }
    
    printf("\nStudent Name : ");
    scanf("%s", s.nm);
    
    printf("\nEnter Trade ID : ");
    scanf("%d", &tno);
    
    rpos = tsearch(tno);
    
    if(rpos == -1)
    {
        printf("\nInvalid Trade No ");
        return ;
    }
    if(t.state == 0)
    {
        printf("\nDeleted Trade");
        return ;
    }
    
    s.tno = tno;
    
    printf("\nEnter City ID : ");
    scanf("%d", &cno);
    
    rpos = csearch(no);
    
    if(rpos == -1)
    {
        printf("\nInvalid City ID");
        return ;
    }
    if(c.state == 0)
    {
        printf("\nDeleted City ID");
        return ;
    }
    s.cno = cno;
    s.state = 1;
    
    fseek(fs, pos, SEEK_SET);
    fwrite(&s, sizeof(STU), 1, fs);
    
    printf("\nStudent record Modified !!");
    return ;
}

//Function to delete student record
void sdel()
{
    int no, pos;
    
    printf("\nEnter Roll No : ");
    scanf("%d", &no);
    pos = ssearch(no);
    
    if(pos == -1)
    {
        printf("\nRecord Not found ");
        return;
    }
    if(s.state == 0)
    {
        printf("\nDeleted Record");
        return;
    }
    s.state = 0;
    
    fseek(fs, pos, SEEK_SET);
    fwrite(&s, sizeof(STU), 1, fs);
    
    printf("\nRecord deleted successfully");
    return;
}


//Function to display all student's record
void sdisplay_all()
{
    int pos;
    
    rewind(fs);
    rewind(ft);
    rewind(fc);
    
    printf("\nStudent Data ");
    
    while(1)
    {
        fread(&s, sizeof(STU), 1, fs);
        
        if(feof(fs)) break;
        
        pos = tsearch(s.tno);
        
        fseek(ft, pos, SEEK_SET);
        fread(&t, sizeof(TRD), 1, ft);
        
        pos = csearch(s.cno);
        
        fseek(fc, pos, SEEK_SET);
        fread(&c, sizeof(CTY), 1, fc);
        if(s.state > 0)
            printf("\n%d %-15s %-15s %-15s", s.rno, s.nm, t.tnm, c.cnm);
    }
}

//function to display students sorted by city
void sdisplay_city()
{
    int pos, opt;
    
    rewind(fs);
    rewind(ft);
    rewind(fc);
    
    printf("\nEnter City No :  ");
    scanf("%d", &opt);
    
    pos = csearch(opt);

    if(pos < 0 || c.state == 0) 
    {
        printf("\nInvalid City ID");
        return ;
    }
    
    fseek(fc, pos, SEEK_SET);
    fread(&c, sizeof(CTY), 1, fc);
    
    while(1)
    {
        fread(&s, sizeof(STU), 1, fs);
    
        if(feof(fs)) break;
    
        pos = tsearch(s.tno);
    
        fseek(ft, pos, SEEK_SET);
        fread(&t, sizeof(TRD), 1, ft);        
    
        if(s.state > 0 && s.cno == opt)
            printf("\n%d %-15s %-15s %-15s %d", s.rno, s.nm, t.tnm, c.cnm, s.state);
    }
}

//Function to display students sorted by trade
void sdisplay_trade()
{
    int pos, opt;
    
    rewind(fs);
    rewind(ft);
    rewind(fc);
    
    printf("\nEnter Trade No :  ");
    scanf("%d", &opt);
    pos = tsearch(opt);
    {
        printf("\nInvalid Trade ID");
        return ;
    }

    fseek(ft, pos, SEEK_SET);
    fread(&t, sizeof(TRD), 1, ft);
    
    while(1)
    {
        fread(&s, sizeof(STU), 1, fs);
        
        if(feof(fs)) break;
        
        pos = csearch(s.cno);
        
        fseek(fc, pos, SEEK_SET);
        fread(&c, sizeof(CTY), 1, fc);        
        
        if(s.state > 0 && s.tno == opt)
            printf("\n%d %-15s %-15s %-15s", s.rno, s.nm, t.tnm, c.cnm);
    }
}

//Function to work over students Functions
void smenue()
{
    int opt, no, pos, op;
    while(1)
    {
        printf("\nStudent Menue\n1. Add\n2. Mod\n3. Del\n4. Display\n5. Search\n6. Back\nOption : ");
        scanf("%d", &opt);

        if(opt > 5)
            break;

        switch(opt)
        {
            case 1:
                sadd(); break;
            case 2:
                smod(); break;
            case 3:
                sdel(); break;

            case 4:
                printf("\n1. Display All\n2. Display by City\n3. Display by Trade\n4. Exit \nOption : ");
                scanf("%d", &op);

                if(op > 3)
                    break;
                
                switch (op)
                {
                    case 1:
                        sdisplay_all(); break;
                    case 2:
                        sdisplay_city(); break;
                    case 3: 
                        sdisplay_trade(); break;
                }                
                break;

            case 5: 
                printf("\nRoll No : ");
                scanf("%d", &no);

                pos = ssearch(no);
                
                if(pos < 0)
                    printf("\nNot Found");
                else
                {
                    printf("\nRecord Found");
                    printf("\n%d %-15s %-15s %-15s", s.rno, s.nm, t.tnm, c.cnm);
                }
        }
    }
}
