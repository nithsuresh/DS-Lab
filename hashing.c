#include<stdio.h>
int main()
{
	int a[13],val,pos,n,i;
	for(i=0;i<13;i++)
		a[i]=-1;
	while(1)
	{
		printf("1.Insert\n2.Search\n3.Exit \n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			printf("Enter the element to insert: ");
			scanf("%d",&val);
			pos=val%13;
			while(a[pos]!=-1)
			{
				printf("Collision occurs at %d\n",pos);
				pos=(pos+1)%13;
     				if(pos==val%13)
      				break;
    			}
    if(a[pos]==-1)
    {
     printf("%d is stored to position %d\n",val,pos);
     a[pos]=val;
    }
    else
     printf("Array is full\n");
    printf("Hash table :\n");
    for(i=0;i<13;i++)
     printf("%d ",a[i]);
    printf("\n");
    break;
   case 2:
    printf("Enter value to be searched : ");
    scanf("%d",&val);
    pos=val%13;
    while(a[pos]!=val)
    {
     pos=(pos+1)%13;
     if(pos==val%13||a[pos]==-1)
      break;
    }
    if(a[pos]==val)
     printf("%d found at position %d\n",val,pos);
    else
     printf("Value not found\n");
    break;
   case 3:return 0;
   default:printf("Wrong choice\n");break;
  }
 }
}
