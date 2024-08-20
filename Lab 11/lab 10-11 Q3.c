#include<stdio.h>
#include<string.h>
struct employee{
	char id[15];
	char name[20];
	int salary;
	
};
struct employee e1;
struct organisation{
	char organisationName[50];
	char organisationNumber[50];
	struct employee e1;
}o1{"NU-FAST","NUFAST123ABC","127","Linus Sebastian",40000};

int main(){
	printf("Size of Organisation is 123");
	printf(" \nOrganisation Name:%s \nOrganisation Number:%s \nEmployee id:%s \nEmployee Name:%s \nEmployee Salary:%d",o1.organisationName,o1.organisationNumber,o1.e1.id,o1.e1.name,o1.e1.salary);
	
	
	
}
