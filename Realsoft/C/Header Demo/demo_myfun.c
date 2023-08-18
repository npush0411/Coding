#include <stdio.h>
#include "myFunction.h"

int main()
{
    int no, res, opt, flg = 0;
    while(1)
    {
        printf("\nMenu\n1. Enter No\n2. OddEven\n3. Digit Sum\n4. Prime\n5. Reverse\n6. Palindrome\n7. Table\n8. Armstrong\n9. Exit\nSelect Optiom : ");
        scanf("%d", &opt);
        if(opt > 8)
            break;
        switch (opt)
        {
            case 1:
                printf("\nEnter No : ");
                scanf("%d", &no);
                
                flg = 1;
                break;
            default:
                if(flg == 0)
                {
                    printf("\nInvalid Data");
                    continue;
                }
                switch (opt)
                {
                    case 2:
                        printf(oddeven(no) ? "\nOdd" : "\nEven");
                        break;
                    case 3:
                        printf("\nDigit Sum : %d", digSum(no));
                        break;
                    case 4:
                        printf(isPrime(no) ? "\nPrime" : "\nNot-Prime");
                        break;
                    case 5:
                        printf("\nReverse : %d", reverse(no));
                        break;
                    case 7:
                        table(no);
                        break;
                    case 6:
                        printf(palindrome(no) ? "\nPallindrome" : "\nNot-Pallindrome");
                        break;            
                    case 8:
                        printf(armstrong(no) ? "\nNot-ArmStrong" : "\nArmStrong");
                        break;
                }        
        }
        
    }
    return 0;
}