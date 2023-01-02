#include<stdio.h>
#include<conio.h>
void main()
{
int max=0,nmax=0,i,j,A[10]={1,5,3,4,2,7,6,9,8,10};

 clrscr();

   for(i=0;i<=9;i++)
   printf("\n %d",A[i]);
   getch();

	 for(i=0;i<=9;i++)
	 {
	 if(A[i]>max)
	{
	 max=A[i];
		}
	   }
      printf("\n high :%d",max);

   getch();
   }
