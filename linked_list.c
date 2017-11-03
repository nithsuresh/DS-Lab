#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};

struct node *start=NULL,*ptr=NULL;

void insertb()
{
ptr=malloc(sizeof(struct node));
printf("Enter data value: ");
scanf("%d",&ptr->data);
ptr->link=NULL;
if(start==NULL)
	start=ptr;
else
	{
	ptr->link=start;
	start=ptr;
	}
return;
}

void display()
{
ptr=malloc(sizeof(struct node));
ptr=start;
if(ptr==NULL)
        printf("Empty linked list");
else
        {
        while(ptr!=NULL)
                {
                printf("%d \n",ptr->data);
                ptr=ptr->link;
                }
        }
return;
}

void inserte()
{int x;
struct node *p;
ptr=malloc(sizeof(struct node));
printf("Enter data value: ");
scanf("%d",&x);
ptr->data=x;
ptr->link=NULL;
if(start==NULL)
    start=ptr;
else
{
p=start;
while(p->link!=NULL)
	{
	p=p->link;
	}
p->link=ptr;

}
}
void insertp(int item)
{
int x;struct node *p;
ptr=malloc(sizeof(struct node));
printf("Enter data value: ");
scanf("%d",&x);
ptr->data=x;
ptr->link=NULL;
if(start==NULL)
	start=ptr;
else
 {
 p=start;
 while((p->data)!=item)
	{
	p=p->link;
	}
 ptr->link=p->link;
 p->link=ptr;
 }
}
main()
{
int ch,item;
printf("\n\n MENU\n 1:Insert at beginning\n 2:Insert at end\n 3:Insert after particular data value\n 5:Exit\n");
do
 {
	printf("Enter choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:insertb();
	       display();
	       break;
	case 2:inserte();
	       display();
	       break;
	case 3:printf("Enter data value after which node is to be inserted: ");
	       scanf("%d",&item);
	       insertp(item);
	       display();
	       break;
	case 4:printf("Enter data value to be deleted: ");
	       scanf("%d",&item);
	       deleten(item);
	       display();
               break;
	case 5:printf("Exit\n");
	       break;
	}
 }while(ch!=5);
}

