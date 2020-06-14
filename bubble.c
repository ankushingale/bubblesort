#include<stdio.h>
int main()
{
	int i,j,n;
	int ch;
	int swap;
	int arr[10];
	do
	{
    printf("\n----------------------------------------------WELCOME TO BUBBLE SORT---------------------------------------------------------------\n");
	printf("ENter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=swap;
		}
	}
}
printf("After bubble sorting new array is.....\n");
for(i=0;i<n;i++)
   {  
    printf("\t%d",arr[i]);
    
}
printf("\nDo you want to continue press 1\n");
scanf("%d",&ch);
}while(ch==1);
	return 0;	
}
