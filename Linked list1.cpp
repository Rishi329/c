#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct ndt{
int data;
struct ndt*next;
};
typedef struct ndt node;
void display(void);
void create(void);
void insert (void);
node *start;

int main()
{
int choice;
do{
printf("This is a program to implement a linked list\n");
printf("press 1 for creation\n");
printf("Press 2 for Insert\n");
printf("press 3 for Display\n");
printf("press 4 for Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:create();break;
case 2:insert();break;
case 3:display();break;
case 4:exit(0);
}
getch();
}while(1);
}
void display(void)
{
node *temp1;
temp1=start;
printf("START=>"); //beautification
while(temp1!=NULL)
{
printf("%d-->",temp1->data);
temp1=temp1->next;
}
printf("END"); //beautification
}
void create(void)
{
node * temp;
temp=(node *)malloc(sizeof(node));
if(temp!=NULL)
{
printf("Enter value for data");
scanf("%d",&temp->data);
start=temp;
temp->next=NULL;
}
else
{
printf("Memory couldnot be allocated by operating");
}
}
void insert(void)
{
node *temp1;
node *temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp1=(node *)malloc(sizeof (node));
if(temp==NULL)
{
printf("Memory not allocated");
}
else
{
printf("Enter data");
scanf("%d",&temp1->data) ;
temp1->next=NULL;
temp->next=temp1;
}
}
