#include<stdio.h>
int main()
{
int i,y=0,j;
for(i=0;i<=100;i++)
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			y++;
			break;
	}
}
if(y==0 && i!=1)
	printf("\n %d",i);
	y=0;
}
}



