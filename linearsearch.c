
#include<stdio.h>
main()
{
 int a[10],n,i,val,pos;
 pos=-1;
 printf("Enter number of elements : ");
 scanf("%d",&n);
 printf("Enter values :\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("Enter value to be searched : ");
 scanf("%d",&val);
 for(i=0;i<n;i++) 
 {
  if(a[i]==val)
	pos=i;
 }
 if(pos==-1)
  printf("Value not found\n");
 else
  printf("Value found at position %d\n",pos);
}
