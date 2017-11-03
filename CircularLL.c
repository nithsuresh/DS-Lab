#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

void main()
{
int n,i;
struct node *p,*ptr,*header;
printf("Enter the no of numbers you need to enter:");
scanf("%d",&n); 
printf("Enter the data:");
p=malloc(sizeof(struct node));
scanf("%d",&p->data);
p->next=p;
header=p;

for(i=0;i<n-1;i++)
{
	ptr=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&ptr->data);
	p->next=ptr;
	ptr->next=header;
	p=ptr;
}
p->next=header;
ptr=header;
while(ptr->next!=header)
{	printf("\n%d  ",ptr->data);
	ptr=ptr->next;
}
printf("\n%d",ptr->data);
}
