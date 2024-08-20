#include <stdio.h>
#include<string.h>
struct info{
	int assessionNumber;
	char name[50];
	char title[50];
	int flag;
};
struct info book1[10];

int main(){
	int i,j,u;
	for(i=0;i<1;i++){
		book1[i].assessionNumber=150+i;
		printf("\nEnter the book name ");
		scanf("%s",&book1[i].name);
		
		printf("Enter the book Title ");
		scanf(" %s",&book1[i].title);
		
		printf("Flag Issued(1) NotIssued(0) ");
		scanf(" %d",&book1[i].flag);
		
	}
	printf("\npress\n");
	
	printf("1-Display book information \n2-Add a new book\n3-Display books of particular author\n4-Display total nuber of books in Library\n5-Issue a Book\n");
	
	scanf("%d",&j);
	switch (j)
	{
		case 1 :printf("Enter the book nunmber:");
				scanf("%d",&i);
				printf(" \nAccession Number %d \nBook Name %s \nBook Title %s",book1[i].assessionNumber,book1[i].name,book1[i].title);
				break;
		case 2 :printf("\nYou added a new book");
				break;
		case 3 :printf("Name of Author ");
				break;
		case 4 :printf("Total number of books are %d",book1[i].assessionNumber);
				break;
		case 5 :printf("you issue a book issue(1)");
				scanf("%d",&u);
					if(u==1){
					book1[i].assessionNumber=book1[i].assessionNumber-1;
					printf("%d",book1[i].assessionNumber);
				}
					else book1[i].assessionNumber=book1[i].assessionNumber+1;
					printf("%d",book1[i].assessionNumber);
				break;				
	}
	
}
	
	
	

