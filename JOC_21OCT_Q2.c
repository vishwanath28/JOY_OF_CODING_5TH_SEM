#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[50],b[50];
	for(int i=0;i<50;i++)
	{
		b[i]=0;
	}
	printf("enter no of values: ");
	scanf("%d",&n);
	printf("enter the values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	printf("frequency as follows:\n");
	for(int i=0;i<50;i++)
	{
		if(b[i]!=0)
		{
			printf("frequency of %d is %d",i,b[i]);
			printf("\n");
		}
		
	}
}
