#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct user
{
    char unm[50];
    char pass[8];
    int state; //0 - deleted 1 - Valid
}user;


//Function to search user
int search_user(char *unm) //Returns 0 if user not found, 1 otherwise
{
    FILE *fu = fopen("USER.dat", "rb");
    user t;
    //If file doen't exists
    if(fu == NULL)
    {
        fclose(fu);
        fu = fopen("USER.dat", "wb");//Opening in wb mode creats new file
        fclose(fu); //Closing file beacause of unwanted mode
        fu = fopen("USER.dat", "rb"); //Again opening for requested mode
    }
    while(1)
    {
        if(feof(fu))//Checking for end of file
            break;
        fread(&t, sizeof(user), 1, fu); //reading record from file and storing it to the t
        if(strcmp(unm, t.unm) == 0 && t.state == 1) //comparing strings for matching user names
        {    
            printf("\nUser Exists");//if user found not allowing to add user of same name
            break;
        }
    }
    fclose(fu);
    if(feof(fu))
        return 0; //Not found
    else
        return 1; // found
}

void pass_rules()
{
    printf("\n\n\n\n\n\n Following are the Rules for creating the password\n\n\n1. Strictly 8 characters long.\n2. Must contain at least 1 uppercase alphabate.\n3. Must contain at least 1 lowercase alphabate.\n4. Must contain at least 1 special character.\n5. Must contain at least 1 Numeric character.\n\n\n\n");
}

//Checking for valid password
bool isValidPassword(const char *pass) {
    int length = 0, uppercase = 0, lowercase = 0, specialChar = 0, numeric = 0, i;

    // Calculate the length of the password
    while (pass[length] != '\0') 
        length++;

    // Check each character of the password
    for (i = 0; i < length; i++) 
        if (isupper(pass[i])) //Checking for uppercase character
            uppercase = 1;
        else if (islower(pass[i])) //checking for lowercase character
            lowercase = 1;
        else if (isdigit(pass[i])) //checking for digit character
            numeric = 1;
        else 
            specialChar = 1; //otherwise will be treated as special character
    

    // Check if all conditions are satisfied
    if (length == 8 && uppercase && lowercase && specialChar && numeric) //Checking for satisfaction of all conditions
        return true;    //return if true, false otherwise
    else
        return false;
}


//Create User
void creat_user()
{
    FILE *fu = fopen("USER.dat", "rb");
    user t;
    //If file doen't exists
    if(fu == NULL)
    {
        fclose(fu);
        fu = fopen("USER.dat", "wb");//Opening in wb mode creats new file
        fclose(fu); //Closing file beacause of unwanted mode
        fu = fopen("USER.dat", "rb"); //Again opening for requested mode
    }
    printf("\nEnter user-name : ");
    scanf("%s", t.unm);
    if(search_user(t.unm))
    {
        printf("\nUser Exists");
        return;
    }
    else
    {
        pass_rules();
        printf("\nEnter Password : ");
        scanf("%s", t.pass);
        if(isValidPassword(t.pass))
        {
            t.state = 1;
            fwrite(&t, sizeof(user), 1, fu);
        }
        else    
            printf("\nInvalid Password");
    }
    fclose(fu);
}


