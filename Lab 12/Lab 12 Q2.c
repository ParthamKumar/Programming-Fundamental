#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

	char name[50];
	int marks,i,n;
	
	printf("Enter the number of students ");
	scanf("%d",&n);
	
	FILE *fptr;
	fptr=(fopen("std.txt","w"));
		if(fptr==NULL){
			printf("Error!!");
			exit(1);
		}
	for(i=0;i<n;i++){
		printf("For student%d Enter the name ",i+1);
		scanf("%s",name);
		
		printf("Enter mareks: ");
		scanf("%d",&marks);
		
		fprintf(fptr,"\n%s \n Marks =%d \n",name,marks);
		
	}

	fclose(fptr);

	return 0;
}

