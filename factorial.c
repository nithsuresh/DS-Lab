#include<stdio.h>
main()
{
int fact(int);
int k,n;
printf("Enter the element:");
scanf("%d",&n);
printf("Factorial: ");
k=fact(n);
printf("%d",k);
}
int fact(int n)
{
if(n==1)
return 1;
else 
return n*fact(n-1);
}



