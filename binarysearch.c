
#include<stdio.h>
main()
{
 int a[10],i,n,val,pos;
 int beg=0,last=n-1,mid;	
 printf("Enter number of elements : ");
 scanf("%d",&n);
 printf("Enter elements in ascending order :\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("Enter value to be searched : ");
 scanf("%d",&val);
 while(beg<last)
 {
  mid=(beg+last)/2;
  if(a[mid]==val)
   break;
  else if(val<a[mid])
  {
   beg=0;
   last=mid-1;
  }
  else
  {
   last=n; 
   beg=mid+1;
  } 
 }
pos=mid+1;
printf("Value found at position %d\n",pos);
 
}
