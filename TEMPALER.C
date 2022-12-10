#include<stdio.h>
#include<conio.h>
void main()
{
int c, f;
clrscr();
printf("enter in the tempreature");
 scanf("%d",&c);

 f=c*9/5+32;

printf("%d value of f",f);

if(f>=100)
{
 printf("\n alert temp. high %d",f);
}
 if(f<=100)
 {
  printf("\n alert temp is medium",f);
  }

   if(f<=40)
   {
  printf("\n alert tempis very low %d",f);
   }

getch();
}