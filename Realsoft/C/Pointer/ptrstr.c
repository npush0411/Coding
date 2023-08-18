#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Declaring i and n
    //i as a subscript variable
    //n for storing strlen temporary
    int i = 0, n;
    //for taking city names as a input
    char t[50];
    //storing base addresses of all the city names in an array of pointers
    char *p[5];
    //as we are storing 5 city names i will run till 5
    while(i < 5) 
    {
        //taking city name as a input
        gets(t);
        //storing strlen in n ( + 1 for null character)
        n = strlen(t) + 1;
        //*(p + i) to hold base address of a city names
        *(p + i) = (char *)malloc(n*sizeof(char));
        //copying temp string to desination
        strcpy(*(p + i), t);
        //incrementing subscript
        i++;
    }
    //Displaying Inputs
    printf("\nCity Names\n");
    for(i = 0; i < 5; i++)
    {
        puts(*(p + i));
        //freeing the allocated space
        free(*(p + i));
    }
    return 0;
}