#include <stdio.h>

int main()
{
    int m_no;
    printf("\nEnter Month No : ");
    scanf("%d", &m_no);
    if(m_no > 12 || m_no < 1)
        printf("\nInvalid Month");
    else    
        if(m_no == 2)
            printf("\n28 Days");
        else
            if(m_no == 4 || m_no == 6 || m_no == 9 || m_no == 11)
                printf("\n30 Days");
            else
                printf("\n31 Days");
    return 0;
}