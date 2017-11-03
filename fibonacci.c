#include<stdio.h>
main()
{
int a=0,b=1,c,n,i;
printf("Enter the no of elements required  ");
scanf("%d",&n);
if(n==1)
{printf("%d",a);return;}
if(n==2)
{printf("%d %d ",a,b);
return;}
else
{i=2;
printf("%d %d",a,b);
while(i<n)
{c=a+b;
a=b;
b=c;
printf(" %d",c);
i++;
}
}
}
