#include<stdio.h>
#include<conio.h>
struct student {
	int phone,roll;
	char Name[20];
	float marks;

};
int main() {
	int k,i,j;
	struct student s[3];
	printf("Enter Student Record \n \n");

	for(i=0; i<3; i++) {
		printf("Enter sName");
		scanf("%s",&s[i].Name);
		printf("Enter sroll");
		scanf("%d",&s[i].roll);
		printf("Enter sphone");
		scanf("%d",&s[i].phone);
		printf("Enter smarks");
		scanf("%f",&s[i].marks);

	}

	printf("Student Record \n \n");

	for(i=0; i<3; i++) {
		printf("sName:%s\n",s[i].Name);

		printf("sroll:%d\n",s[i].roll);

		printf("sphone:%d\n",s[i].phone);

		printf("smarks:%f\n",s[i].marks);


	}
	int max=0;
		for(i=0;i<3;i++)
		{
		if( max < s[i].marks)
			{
			max=s[i].marks;
			j=i;
	}
	
}
printf("\nRoll no %d name %s max marks %f",s[j].roll,s[j].Name,s[j].marks);
 int mean=1000;
 for(i=0;i<3;i++)
 {
 	if(mean > s[i].marks)
 	{
 		mean = s[i].marks;
 	
 		k=i;
	 }
	 
	 
 }
 printf("\nRoll no %d name %s min marks %f",s[k].roll, s[k].Name, s[k].marks);
   int m;
   
   m=s[j].marks;
   s[j].marks=s[k].marks;
   s[k].marks=m;
   
	for(i=0; i<3; i++) {
		printf("sName:%s\n",s[i].Name);

		printf("sroll:%d\n",s[i].roll);

		printf("sphone:%d\n",s[i].phone);

		printf("smarks:%f\n",s[i].marks);
}

   
	return 0;
}
