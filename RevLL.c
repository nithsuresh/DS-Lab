#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

void main()
{
    struct node *prev,*head,*p,*x;
    int n,i;
    printf ("Number of elements:");
    scanf("%d",&n);
head=NULL;
    printf("\n Enter elements:");
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->info);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }


p=head;
printf ("The linked list is:\n");
while(p!=NULL)
{
printf("\n%d",p->info);
p=p->next;

}

printf("\nThe reverse list is\n");
prev=NULL;
p=head;
while(p!=NULL)
{
x=p->next;
p->next=prev;
prev=p;
p=x;
}

while(prev!=NULL)
{
printf("\n%d\n",prev->info);
prev=prev->next;
}

}

