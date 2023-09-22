/*
    Name : Pushkar R Nashikkar
    Class : SY B.Tech Electronics
    PRN : 22410074   Batch : EN3
*/

//C Program to input and display 5 student data using structure
#include <stdio.h>
struct student
{
	int rno;
	char nm[50];
};
int main()
{
	struct student s[5];
	int i;
	printf("\n-- Enter Data -- ");
	for(i = 0; i < 5; i++)
	{
		printf("\nEnter Student Roll No : ");
		scanf("%d", &s[i].rno);
		printf("\nEnter Student Name : ");
		scanf("%s", s[i].nm);
	}
	printf("\nStudent Data\n");
	for(i = 0; i < 5; i++)
		printf("\nRoll No : %d\tName : %s", s[i].rno, s[i].nm);
	return 0;
}
