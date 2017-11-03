#include<stdio.h>
#include<stdlib.h>

struct node{

struct node *rlink;
int data;
struct node *llink;
};

void ddl(struct node *ptr)
{
printf("The linked list is:");
while(ptr!=NULL)
{
        printf("\n%d",ptr->data);
        ptr=ptr->rlink;
}
}
void main()
{
int x,i,l,ch,pos,del;
struct node *head,*p,*prev,*ptr,*p1;
printf("\nCreating the double linked list");
printf("\nEnter the limit:");
scanf("%d",&l);
printf("Enter elements:");
head=NULL;
for(i=0;i<l;i++)
{
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->rlink=NULL;
        if(head==NULL)
            {head=p;
	    prev=p;
		}
        else
            {
		prev->rlink=p;
		p->llink=NULL;
		prev=p;
	    }
}
ptr=head;
ddl(ptr);
printf("\n1.Adding at the front\n2.Adding at the end\n3.Adding at a position\n4.Deleting at a position\n5.Press 5 to end");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
	p=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&p->data);
	p->rlink=head;
	head->llink=p;
	head=p;
	ptr=p;
	ddl(ptr);
	break;

case 2:
	p=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&p->data);
	prev->rlink=p;
	p->llink=prev;
	prev=p;
	ddl(ptr);
	break;

case 3:
	p=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&p->data);
	printf("Enter the position:");
	scanf("%d",&pos);
	for(i=2;i<pos;i++)
		ptr=ptr->rlink;
	p->llink=ptr;
	p->rlink=ptr->rlink;
	ptr->rlink=p;
	(p->rlink)->llink=p;
	ptr=head;
	ddl(ptr);
	break;
case 4:	printf("Enter the node to be deleted:");
	scanf("%d",&del);
	ptr=head;
 	for(i=1; i<pos&& ptr->rlink!=NULL; i++)
		ptr = ptr->rlink;
    	p=ptr->rlink;
	p1=ptr->llink;
	p->llink=p1;
	p1->rlink=ptr;       
	ptr=head;
	ddl(ptr);
	break;   
}

}
