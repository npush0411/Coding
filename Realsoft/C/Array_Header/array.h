#include <stdio.h>

//function to print array
void display(int arr[], int size)
{
    int i;
    printf("\nArray Data\n");
    for (i = 0; i < size; i++)
        printf("%4d", arr[i]);
}

//function to return sum of the elements of arrays
int arrSum(int arr[], int size)
{
    int sum = 0, i;
    for(i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

//function to compute mean of all the elements
float arrMean(int arr[], int size)
{
    float mean = arrSum(arr, size) / size;
    return mean;
}

//function to search the input in array
int linear_search(int arr[], int size, int key)
{
    int i;
    for(i = 0; i < size; i++)
        if(key == arr[i])
            break;
    if(i == size)
        return 0;
    else
        return 1;
}

//function to implement binary search
//returns 1 if key found otherwise 0
int bin_ser(int arr[], int size, int key)
{
    int s = 0, e = size - 1, mid;
    while(s < e)
    {
        mid = (s + e)/2;
        if(arr[mid] == key)
            break;
        else
            if(key > arr[mid])
                s = mid + 1;
            else
                e = mid - 1;
    }
    if (s < e)
        return 0;
    else
        return 1;    
}

//function to find maximum in array
int arrMax(int arr[], int size)
{
    int max = 0, i;
    for(i = 0; i < size; i++)
        if(max < arr[i])
            max = arr[i];
    return max;
}

//function to find minimum in array
int arrMin(int arr[], int size)
{
    int min = 0, i;
    for(i = 0; i < size; i++)
        if(min > arr[i])
            min = arr[i];
    return min;
}

//function to check array data is in ascending order !!
//returns 1 if sorted otherwise 0
int isSorted_ascending(int arr[], int size)
{
    int i = 0;
    while(i < size)
    {
        if(arr[i] > arr[i + 1])
            break;
        i++;
    }
    if(i == size)
        return 1;
    else
        return 0;
}


//1 2 3 4 5

//function to check array data is in descending order !!
//returns 1 if sorted otherwise 0
int isSorted_descending(int arr[], int size)
{
    int i = 0;
    while(i < size)
    {
        if(arr[i + 1] > arr[i])
            break;
        i++;
    }
    if(i == size)
        return 1;
    else
        return 0;
}

//function to find out max data position 
int maxPos(int arr[], int size)
{
    int i, pos = 0, max = 0;
    for(i = 0; i < size; i++)
        if(arr[i] > max)
        {
            max = arr[i];
            pos = i;
        }
    return pos;
}

//function to find out max data position 
int minPos(int arr[], int size)
{
    int min = 0, pos, i;
    for(i = 0; i < size; i++)
        if(min > arr[i])
        {
            min = arr[i];
            pos = i;
        }
    return pos;
}