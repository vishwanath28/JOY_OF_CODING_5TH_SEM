#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int n,sum;
	printf("enter no of elements: ");

	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter sum: ");
	scanf("%d",&sum);
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			if((a[i]+a[j])==sum)
			{
				printf("indices where sum of values is %d are %d and %d\n",sum,i,j);
				exit(0);
			}
			
		}
	}
	printf("no indices found\n");
}
