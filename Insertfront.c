#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void main()
{
struct node *p,*prev,*head,*ptr;
int limit,i;
head=NULL;
printf("Enter the no of elements to be inserted:");
scanf("%d",&limit);
for(i=0;i<limit;i++)
{
	p=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&p->data);
	p->next=NULL;	
	if(head==NULL)
	{
		head=p;
		
	}
else
		prev->next=p;
	prev=p;
}
ptr=head;
printf("Before insertion:");
while(head!=NULL)
{
	printf("%d\n",head->data);
	head=head->next;
}
printf("Enter the data to be inserted:");
p=malloc(sizeof(struct node));
scanf("%d",&p->data);
p->next=NULL;
head=p;
p->next=ptr;
printf("After insertion:");
while(head!=NULL)
{
	printf("%d\n",head->data);
	head=head->next;
}
}
