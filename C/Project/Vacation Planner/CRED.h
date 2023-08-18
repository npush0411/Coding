
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct use
{
    char nm[15];
    int ID;
    char pass[10];
}user;

char * input_nm()
{
    char *nm = (char *)malloc(15*sizeof(char));
    printf("\nEnter User Name : ");
    scanf("%s", nm);
    return nm;
}



//FUncgtion to chekck weather the password is valid
int checkPassword(char *pass) {
    int specialCount = 0;
    int upperCount = 0;
    int lowerCount = 0;

    for (int i = 0; i < 8; i++) {
        char c = pass[i];
        if (isalpha(c)) {
            if (islower(c)) {
                lowerCount++;
            } else if (isupper(c)) {
                upperCount++;
            }
        } else if (ispunct(c)) {
            specialCount++;
        }
    }

    return (specialCount >= 1 && upperCount >= 1 && lowerCount >= 1) ? 1 : 0;
}


//Function to
void input_pass(user *p)
{
    char *pass = (char *)malloc(8*sizeof(char));
    printf("\nEnter Password : ");
    scanf("%s", pass);
    if(checkPassword(pass))
        return pass;
    else
        return input_pass();
}

int isValidID(int sv)
{
    FILE *fu = fopen("CRED.dat", "rb");
    int id;
    while(1)
    {
        if(feof(fu))
            break;
        fread(&id, sizeof(int), 1, fu);
        if(id == sv)
            break;
    }
    if(fu != NULL)
        printf("\nInvalid ID");
}

void input_ID(user *p)
{
    int id;
    printf("\nEnter ID : ");
    scanf("%d", &id);
    if(isValidID(id)){

    }
}

//Function to creat new user
void creatUser()
{
    FILE *fu = fopen("CRED.dat", "wb");
    user *t;
    input_nm(&t);
    input_ID(&t);
    input_pass(&t);
    if(fu == NULL)
    {
        fu = fopen("CRED.dat", "rb");
        fclose(fu);
        fu = fopen("CRED.dat", "wb");
    }

}
