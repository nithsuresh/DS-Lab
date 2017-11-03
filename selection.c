#include<stdio.h>

void ssort(int a[],int n)
{
	int i,j,t;
 	for(i=0;i<n-1;i++)
  	{
	for(j=i+1;j<n;j++)
    	{
      		if(a[i]>a[j])
        	{
          	  t=a[i];
	          a[i]=a[j];
        	  a[j]=t;
        	}
    	}
}

printf("\n SORTED ARRAY \n");

for(i=0;i<n;i++)
	printf("   %d",a[i]);
printf("\n");
}

void main()
{
int i,n;
printf("Enter n:");
scanf("%d",&n);
int a[n];
printf("\n Enter Array elements \n");

for(i=0;i<n;i++)
	scanf("%d",&a[i]);
ssort(a,n);

}


