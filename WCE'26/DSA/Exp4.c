/*
    Name : Pushkar R Nashikkar
    Class : SY B.Tech Electronics
    PRN : 22410074   Batch : EN3
*/

//C Program to implement binary and sequential search
#include<stdio.h>

int binary_search(int arr[], int search , int n)
{
    int mid, beg = 0, end = n;
    while(beg < end)
    {
        mid = (beg + end)/2;
        if(arr[mid] == search)
            break;
        else
	if(arr[mid] > search)
		end = mid - 1;
	else
		beg = mid + 1;
    }
    if(arr[mid] == search)
        return 1; //found
    else
        return 0; //not found
}



int sequential_search(int arr[], int search, int n)
{
    int i;
    for(i = 0; i < n; i++)
        if(arr[i] == search)
			break;
    return (i<n);
}
int main()
{   
    int search ,arr[5], i;
    printf("Enter the array data \n");
    while(i < 5)
    {
        scanf("%d",&arr[i]);
		if(i != 0)
			if(arr[i-1] > arr[i])
				continue;
        i++;
    }
    printf("Enter the search value : \n");
    scanf("%d",&search);

    printf("\nBinary search \n");
    if (binary_search(arr,search,5))
        printf("\n Found");
    else 
        printf("\n Not Found");

    printf("\nSequential search");
    if(sequential_search(arr,search,5))
        printf("\n Found");
    else 
        printf("\n Not Found");
      return 0;
}


