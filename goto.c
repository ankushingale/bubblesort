#include<stdio.h>
int main()
{
int n,i,ch;
first:
printf("Enter the no\n");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
	if(n%i==0)
    { 
     printf("\t%d",i);
	} 
 printf("\nDo you want to continue \n") ;
 printf("Press 1 ");
 scanf("%d",&ch);
 if(ch==1)
 goto first;
return 0;
}
