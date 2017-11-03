#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

void main()
{
int n,i,pos;
struct node *new_node,*current,*front=NULL,*ptr;
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(front==NULL)
        {
                front=new_node;
                current=new_node;
        }
        else
        {
                current->next=new_node;
                current=new_node;

 }

}

current=front;
printf("\nThe array before the deletion:");
for(i=0;i<n;i++)
{
        printf("%d\n",current->data);
        current=current->next;
}

printf("Enter the position:");
scanf("%d",&pos);
pos--;
current=front;
i=1;
while(i<pos)
{
current=current->next;
i++;
}
ptr=current->next;
current->next=ptr->next;
free(ptr);
current=front;
printf("Array after deletion:");
while(current!=NULL)
{
	printf("%d\n",current->data);
	current=current->next;
}
}
