#include <stdio.h>

int main(){
    int oddeven();
    int res = oddeven();
    if(res == 1)
        printf("\nOdd");
    else    
        printf("\nEven");
    return 0;
}
int oddeven()
{
    int no;
    printf("Enter No : ");
    scanf("%d", &no);
    return no%2;
}