#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

void main()
{
int n,i,co=0;
struct node *new_node,*current,*head=NULL;
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
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
while(current->next!=NULL)
{
	co++;
	current=current->next;
}
co++;
printf("The number of nodes is: %d\n",co);
}
