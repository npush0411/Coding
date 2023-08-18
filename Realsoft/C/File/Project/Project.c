#include <stdio.h>
#include <string.h>
#include "project.h"
typedef struct user
{
    int flg;
    char usernm[10];
    char pass[10];
    int state;
}USE;
FILE *fu;
USE u;
void run_prg()
{
    int opt;
    fs = fopen("STU.dat", "r + b");
    fc = fopen("CTY.dat", "r + b"); //r+b reading and writing both
    ft = fopen("TRD.dat", "r + b");

    if(fs == NULL)
    {
        fs = fopen("STU.dat", "wb");
        fclose(fs);
        fs = fopen("STU.dat", "r + b");
    }
    if(fc == NULL)
    {
        fc = fopen("CTY.dat", "wb");
        fclose(fc);
        fc = fopen("CTY.dat", "r + b");
    }
    if(ft == NULL)
    {
        ft = fopen("TRD.dat", "wb");
        fclose(ft);
        ft = fopen("TRD.dat", "r + b");
    }
    while(1)
    {
        printf("\nStudent Record System\n1. Student Menue\n2. Trade Menue\n3. City Menue\n4. Exit\n");
        scanf("%d", &opt);
        if(opt > 3)
            break;
        switch(opt)
        {
            case 1:
                smenue(); break;
            case 2:
                tmenue(); break;
            case 3:
                cmenue(); break;
        }
    }
    fclose(fs);
    fclose(fc);
    fclose(ft);
}

int isvalid(char *pass)
{
    static int i, uc, sc;
    while(pass[i] != '\0')
    {
        if(pass[0] == '@' || pass[0] == '$' || pass[0] == '#')
            break;
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            uc++;
        else
            if(pass[i] == '#' || pass[i] == '@' || pass[i] == '$')
                sc++;
        i++;
    }
    if(uc != 0 && sc != 0 && pass[i] == '\0' && i >= 7)
        return 1;
    else
        return 0;
}
void creatUser()
{

}
int usearch(char unm[10])
void greet_n_ask()
{
    int i = 0, flg = 0;
    char usernm[10], pass[10];
    printf("                                Welcome to Student Record Manager");    
        printf("\n                              User Name  :    ");
        scanf("%s", usernm);
        if(usearch(usernm))  
            while(i < 3){
                printf("\n          Password :    ");
                scanf("%s", pass);
                if(isvalid(pass) == 0)
                {
                    fread(&u, sizeof(USE), 1, fu);
                    if(strcmp(pass, u.pass) == 0 && u.state > 0)
                    {    run_prg(); flg = 1; }
                    else    
                        printf("\nInvalid Username or Password\n");
                }
                else
                    printf("\nInvalid Password");
                if(flg = 1) break; i++;
            }
        printf("\nThank You\n");
    return;

}

int main()
{
    fu = fopen("user.dat", "r + b");
    if(fu == NULL)
    {
        fu = fopen("user.dat", "wb");
        fclose(fu);
        fu = fopen("user.dat", "r + b");
    }
    fwrite(&u, sizeof(USE), 1, fu);
    fread(&u, sizeof(USE), 1, fu);
    u.flg = 0;
    fwrite(&u, sizeof(USE), 1, fu);
    greet_n_ask();
    return 0;
}