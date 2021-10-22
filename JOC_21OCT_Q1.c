#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,flag,a[10];
	printf("enter no of values: ");
	scanf("%d",&n);
	printf("enter the values: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int key=a[i];
		for(int j=i+1;j<n-1;j++)
		{
			if(a[j]==key)
			{	printf("array not distinct");
				exit(0);
			}
		}
	}
	printf("array distinct");
	
}
