#include<stdio.h>
struct addrass
  	{
		int house;
		char city[20];
		int pincode;
	};

		struct student
		{
		int rollno;
		struct addrass add;		
    	};
	

			int main()
		{
			struct student s[4];
			int i;
			for(i=0;i<=3;i++)
		{
			printf("Enter shouse no");
		scanf("%d",&s[i].add.house);
		printf("Enter scity");
		scanf("%s",&s[i].add.city);
		printf("Enter spincod");
		scanf("%d",&s[i].add.pincode);
		printf("Enter sroll");
		scanf("%d",&s[i].rollno);

		}
	printf("Student Record \n \n");

	for(i=0; i<3; i++)
	 {
		printf("shouse:%d\n",s[i].add.house);

		printf("scity:%s\n",s[i].add.city);

		printf("spincode:%d\n",s[i].add.pincode);

		printf("sroll:%d\n",s[i].rollno);
	 }
	 return 0;
}
	

