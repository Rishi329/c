#include<stdio.h>
int main()
{
	int i,a[10];
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
}
