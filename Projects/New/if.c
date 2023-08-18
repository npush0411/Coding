#include <stdio.h>

int main()
{
    int m = 20;
    int e = 40;
    int tot = m + e;
    if(e > 20)
        if(tot > 40)    
            printf("\nPass");
        else    
            printf("\nFail");
    else   
        printf("\nFail");
    return 0;
}