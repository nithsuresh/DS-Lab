//*inert_any_position *//

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

void main()
{
int l,i,pos;
struct node *new_node,*current,*head=NULL,*ptr;
printf("enter the limit");
scanf("%d",&l);
for(i=0;i<l;i++)
{
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
                head=new_node;
                current=new_node;
        }
        else
        {
                current->next=new_node;
                current=new_node;
        }
}

current=head;
printf("\nthe array before the addition");
for(i=0;i<l;i++)
{
        printf("\n%d",current->data);
        current=current->next;
}

new_node=(struct node *)malloc(sizeof(struct node));

if(new_node == NULL)
   printf("nFailed to Allocate Memory");
else
{
        printf("\nEnter the data : ");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
	printf("\nenter the position");
	scanf("%d",&pos);
	pos--;
}
i=1;
current=head;
while(i<pos)
{
	current=current->next;
	i++;
}

ptr=current->next;
current->next=new_node;
new_node->next=ptr;

current=head;
printf("\narray after addition");
for(i=0;i<l+1;i++)
{
	printf("\n%d",current->data);
	current=current->next;
}
}
