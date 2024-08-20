#include<stdio.h>

	struct reg{
		char courseid[10];
		char coursename[50];
	};
	struct reg r;
	struct student{
		char studentId[10];
		char Firstname[10];
		char Lastname[10];
		int cellno;
		char email[70];
		struct reg r;
		}s;
	
main()
{
	
		
		int stud[5],i;
		
		for(i=0;i<5;i++){
			printf("Enter the data of student %d\n",i+1);
			printf("Student Id: ");
			scanf("%s",s.studentId);
			printf("Student First name: ");
			scanf("%s",s.Firstname);
			printf("Student Last name: ");
			scanf("%s",s.Lastname);
			printf("Student Cell no: ");
			scanf("%d",&s.cellno);
			printf("Student email ");
			scanf("%s",s.email);
			printf("Student Course id: ");
			scanf("%s",s.r.courseid);
			printf("Student Course Name: ");
			scanf("%s",s.r.coursename);
		}
		
}
