#include<stdio.h>
#include<conio.h>
struct student {
	int phone,roll;
	char Name[20];
	float marks;

};
int main() {
	int i;
	struct student s[5];
	printf("Enter Student Record \n \n");

	for(i=0; i<5; i++) {
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

	for(i=0; i<5; i++) {
		printf("sName:%s\n",s[i].Name);

		printf("sroll:%d\n",s[i].roll);

		printf("sphone:%d\n",s[i].phone);

		printf("smarks:%f\n",s[i].marks);


	}
	return 0;
}
