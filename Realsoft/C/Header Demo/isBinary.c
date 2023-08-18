#include <stdio.h>

int main()
{
    int isBinary();
    int res = isBinary();
    if(res == 0)
        printf("\nNot ");
    printf("Binary");
    return 0;
}
int isBinary()
{
    int no;
    printf("\nEnter No: ");
    scanf("%d", &no);
    while(no != 0)
    {
        if(no%10 > 1)
            break;
        else
            no /= 10;
    }
    if(no == 0)
        return 1;
    else
        return 0;
}