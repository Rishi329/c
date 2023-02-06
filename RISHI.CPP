#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student
{
 char name[20];
 int roll;
 int marks;

 };
// typedef struct student list;

 void main()
 {
 clrscr();
  struct student s1[4];
 int j,t,i;
 char a[20];
 for(i=0;i<=3;i++)
 {
 printf("enter name");
 scanf("%s",&s1[i].name);

 printf("enter roll no ");
 scanf("%d",&s1[i].roll);

 printf("enter marks ");
 scanf("%d",&s1[i].marks);
 clrscr();
 }
 for(i=0;i<=3;i++)
 {
 printf("rollno=%d\tname=%s\n",s1[i].roll,s1[i].name);
 }
 for(i=0;i<=3;i++)
 {
	for(j=0;j<=3;j++)
	 {
		if(s1[j].roll>s1[j+1].roll)
		{
		  t=s1[j].roll;
		  s1[j].roll=s1[j+1].roll;
		  s1[j+1].roll=t;

		  strcpy(a,s1[j].name);
		  strcpy(s1[j].name,s1[j+1].name);
		  strcpy(s1[j+1].name,a);
		}
	 }

  }
   for(i=0;i<=3;i++)
   {
     printf("%d\t%s \n",s1[i].roll,s1[i].name);
     }
	 getch();
 }