#include<stdio.h>
int main()
{
	int ball[8],flag[8];
	printf("enter balloon numbers: ");
	for(int i=0;i<8;i++)
	{
		scanf("%d",&ball[i]);
		flag[ball[i]]=1;
	}
	printf("balloons in the box: ");
	for(int i=0;i<8;i++)
	{
		if(flag[ball[i]]!=0)
		{printf("%d ",ball[i]);flag[ball[i]]=0;}
	}
	printf("\n");
	
}
