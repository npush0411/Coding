/*
    Name : Pushkar R Nashikkar
    Class : SY B.Tech Electronics
    PRN : 22410074   Batch : EN3
*/

//C Program to find maximum element from array of 5 elements
#include <stdio.h>

int main()
{
	int arr[5], i, max;
	printf("\nEnter Data\n");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for(i = max = 0; i < 5; i++)
		if(max < arr[i])
			max = arr[i];
	printf("\nMax : %d", max);
}
