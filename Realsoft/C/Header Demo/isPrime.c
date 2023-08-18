#include <stdio.h>

int main()
{
    int no, i;
    printf("\nEnter No : ");
    scanf("%d", &no);
    for ( i = 2; i < no/2; i++)
        if(no%i != 0)
            break;
    if(i == no/2) 
        return 1;
    else
        return 0;   
}
int main(){
    if(isPrime() == 0)
        printf("\nNot");
    printf("Prime");
}