#include <stdio.h>

//Function To check weather the inputd string is binary string or not
int isBinary(char str[])
{   
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] != '0' && str[i] != '1')
            break;
        i++;        
    }
    if(str[i] == '\0')
        return 1;
    else    
        return 0;
}