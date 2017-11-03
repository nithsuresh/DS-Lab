#include<stdio.h>

void insort(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
	temp=a[i];
	j=i-1;
  	{
  	 while(temp<a[j] && j>=0)
   	 {
		a[j+1]=a[j];
     		j--;
   	 }
  	a[j+1]=temp;
 	}
}
printf("\n SORTED ARRAY \n");
for(i=0;i<n;i++)
	printf("  %d",a[i]);
printf("\n");
}

void main()
{
int a[10],i,n;
printf("Enter n:");
scanf("%d",&n);
printf("\n Enter Array Elements:");
for(i=0;i<n;i++)
	scanf("  %d",&a[i]);
insort(a,n);
}

