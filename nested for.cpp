 #include<stdio.h>
 int main()
 {
 	int i,j,b[3][3]={1,2,3,4,5,6,7,8,9,};
 	int a[3][3]={1,2,3,4,5,6,7,8,9};
 	for(i=0;i<=2;i++)
 	{
 		for(j=0;j<=2;j++)
 		{
 			scanf("%d",&a[i][j]);
		}
	}
 	for(i=0;i<=2;i++)
 	{
 		for(j=0;j<=2;j++)
 		{
 		printf("\t%d",a[i][j]);
		}
		 printf("\n");
	}
}
	for(i=0;i<=2;i++)
 	{
 		for(j=0;j<=2;j++)
 		{
 			scanf("%d",&b[i][j]);
		}
	}
 	for(i=0;i<=2;i++)
 	{
 		for(j=0;j<=2;j++)
 		{
 		printf("\t%d",b[i][j]);
		}
		 printf("\n");
	}
}
