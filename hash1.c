#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char w[10],h1[20][10],h2[20][10],c,s[10][10];
int i,n,asc;

int f()
{int i=0,s=0;
while(w[i]!='\0')
 {asc=w[i];
  s+=asc;
  i++;
 }
 return s%5;
}

void hash()
{int hval,x,q;
for(i=0;i<n;i++)
 {strcpy(w,s[i]);
  hval=f()%13;
  q=1;
  printf("\n%s  %d",w,hval);
 x=hval;
 while(strcmp("000",h1[x])!=0)
   x=x+1;
 strcpy(h1[x],w);

 x=hval;
 while((strcmp("000",h2[x])!=0) && x<20)
  {
   x=hval+(q*q);
   q++;
  }
 strcpy(h2[x],w);
 }
}

void search()
{
int lcomp=1,qcomp=1,q=1,x,hval;
printf("ENTER WORD TO BE SEARCHED: ");
scanf("%s",w);
hval=f()%7;


x=hval;
while(strcmp(w,h1[x])!=0)
 {
  qcomp++;
  x=hval+(q*q);
  q++;
 }
printf("QUADRATIC HASHING:\nWord found at %d\nAfter %d comparisons\n ",x,qcomp);


}


int main()
{
for(i=0;i<20;i++)
 {
  strcpy(h1[i],"000");
  strcpy(h2[i],"000");
 }

printf("No of words: ");
scanf("%d",&n);

printf("ENTER %d WORDS: ",n);
for(i=0;i<n;i++)
  scanf("%s",s[i]);

hash();

printf("\n\nLINEAR HASHING: \n");
for(i=0;i<20;i++)
  printf("%d   %s\n",i,h1[i]);

printf("\n\nQUADRATIC HASHING: \n");
for(i=0;i<20;i++)
  printf("%d   %s\n",i,h2[i]);

search();
}
