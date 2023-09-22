#include<stdio.h>

void main()
{
    int x[10];
    int sv,mid,l,r,i=0;
    while(i<10)
    {
        printf("\n enter no:");
        scanf("%d",&x[i]);
        if(i>0 && x[i]<x[i-1])
         printf("\n invalid input");
        else
          i++;

    }
    printf("\n serach value:");
    scanf("%d",&sv);
    l=0;r=9;
    do
    {
     mid=(l+r)/2;
     if(x[mid]==sv)
       break;
    if(sv<x[mid])
    r=mid-1;
    else
    l=mid+1;
    }while(i==r);
    if(x[l]==x[r])
      printf("\n found");
    else
      printf("\n not found");
    return;

    
}