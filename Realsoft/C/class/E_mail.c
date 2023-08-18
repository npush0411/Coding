#include <stdio.h>

int isEmail(char k[])
{
    int i = 0, t = 0, cnt;
    while(k[i] != '\0')//while loop runs till null
    {
        if(k[0] > 32 && k[0] < 40) //checks weather the first character is special character or not
            break; //if found yes then break as e-mail can;t start with special character
        if(k[i] == '@')//if found @
        {
            cnt++; //incremented counter so that we can make decisions based on it
            t = i; //Setting third variable
        }
        if(k[i] == '.') // checking for dot @
        {
            if(t == 0)//assuring that the t is initialized (As we're initializing t after @ is found)
            {
                i++; //Jumping to next iteration
                continue;
            }
            //checking weather the part after . (Domain Name) is correct (com/in)
            if((k[t+1] == 'i' && k[t+1] == 'n'))
                    cnt++;//incrementing counter if okay
            else
                if((k[t+1] == 'c' && k[t+1] == 'o' && k[t+2] == 'm'))
                    cnt++; //incrementing counter if okay
                else
                    break; //if both conditions failed then brek as domain name is not 'com' || 'in'
        }
        i++; //incrementing counter while jumping to next iteration
    }
    if(cnt == 2)
        return 1;
    else
        return 0;
}

int main()
{
    char em[50];
    printf("\nEnter E-mail : ");
    scanf("%s", &em);
    if(isEmail(em))
        printf("\nValid E-mail");
    else
        printf("\nInValid E-mail");
}