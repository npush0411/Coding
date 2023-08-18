#include <stdio.h>
#include "array.h"

int main()
{
    int arr[10], opt, i, flg = 0, key;
    while(1)
    {
        printf("\n1. Enter array Elements\n2. Display array elements\n3. Display Sum of Array elements\n4. Compute mean of array elements\n5. Search\n6. To find Maximum Between array elements\n7. To find Minimum Between array elements\n8. To check for array is in Ascending order or not\n9. To check for array is in descending order or not\n10. Maximum Data position\n11. Minimum Data position\n12. Exit\nEnter Choice : ");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
                printf("\nEnter 10 Elements of array : ");
                for(i = 0; i < 10; i++)
                    scanf("%d", &arr[i]);
                flg = 1;
                break;
            case 12:
                break;
            default:
                if(flg == 1)
                {
                    switch(opt)
                    {
                        case 2:
                            display(arr, 10);
                            break;
                        case 3:
                            printf("\nSum Of Array elements is %d\n", arrSum(arr, 10));
                            break;
                        case 4:
                            printf("\nMean Of Array Elements is %f\n", arrMean(arr, 10));
                            break;
                        case 5:
                            printf("\nEnter Key : ");
                            scanf("%d", &key);
                            if(isSorted_ascending(arr, 10))
                                if(binary_search(arr, 10, key))
                                    printf("\nKey Found\n");
                                else    
                                    printf("\nKey Not Found\n");
                            else
                                if(linear_search(arr, 10, key))
                                    printf("\nKey Found\n");
                                else
                                    printf("\nKey not found\n");
                            break;
                        case 6:
                            printf("\nMax : %d\n", arrMax(arr, 10));
                            break;
                        case 7:
                            printf("\nMin : %d\n", arrMin(arr, 10));
                            break;
                        case 8:
                            printf(isSorted_ascending(arr, 10) ? "\nNot Ordered" : "\nOrdered");
                            break;
                        case 9:
                            printf(isSorted_descending(arr, 10) ? "\nIn descending Order" : "\nNot Ordered");
                            break;
                        case 10:
                            printf("Max : %d\t Position : %d\n", arr[maxPos(arr, 10)], maxPos(arr, 10));
                            break;
                        case 11:
                            printf("Min : %d\t Position : %d\n", arr[minPos(arr, 10)], minPos(arr, 10));
                            break;
                    }
                }
                else
                {
                    printf("\nInvalid Input !!\n");
                        continue;
                }
        }
        if(opt == 12)
            break;
    }
    return 0;
}