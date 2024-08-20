#include<stdio.h>
int main (){
	
	char choice,choice1;
	int t,qu,B=200,F=50,P=500,S=500,bill,tb,bill1;
	
	printf("			Welcome to MY SHOP");
	
	printf("\nPlease select from the following Menu ");
	printf("\nB= Burger \nF= French Fries \nP= Pizza \nS= Sandwich");
		
	printf("\nHow many types of snacks do you want to order ",t);
	scanf("%d",&t);
	
	
	if(t==1){
		fflush(stdin);
	printf("Enter the snack do you want to buy ");
	scanf("%c",&choice);
	printf("\nPlease provide the Quantity "),qu;
	scanf("%d",&qu);
	
		switch (choice){
			case 'B':
				printf("You have ordered Burger ");
				bill=B*qu;
				printf("Your Bill is %d",bill);
				break;
			case 'F':
				printf("You have ordered French Fries ");
				bill=F*qu;
				printf("Your Bill %d",bill);
				break;
			case'P':
				printf("You have ordered Pizza ");
				bill=P*qu;
				printf("Your Bill %d",bill);
				break;
			case'S':
				printf("You have ordered Sandwich ");
				bill=S*qu;
				printf("Your Bill %d",bill);
				break;
						
		break;
		}
			}
		else if (t==2){
			fflush(stdin);
				printf("Enter the first snack do you want to buy ");
				scanf("%c",&choice);
				printf("\nPlease provide the Quantity ");
				scanf("%d",&qu);
		switch (choice){
			case 'B':
				printf("You have ordered Burger ");
				bill=B*qu;
				printf("Your Bill is %d",bill);
				break;
			case 'F':
				printf("You have ordered French Fries ");
				bill=F*qu;
				printf("Your Bill %d",bill);
				break;
			case'P':
				printf("You have ordered Pizza ");
				bill=P*qu;
				printf("Your Bill %d",bill);
				break;
			case'S':
				printf("You have ordered Sandwich ");
				bill=S*qu;
				printf("Your Bill %d",bill);
				break;
						
		
		}
		fflush(stdin);
			printf("\nEnter the second snack do you want to buy ");
				scanf("%c",&choice1);
				printf("\nPlease provide the Quantity "),qu;
				scanf("%d",&qu);
				switch (choice1){
			case 'B':
				printf("You have ordered Burger ");
				bill1=B*qu;
				printf("Your Bill is %d",bill1);
				break;
			case 'F':
				printf("You have ordered French Fries ");
				bill1=F*qu;
				printf("Your Bill %d",bill1);
				break;
			case'P':
				printf("You have ordered Pizza ");
				bill1=P*qu;
				printf("Your Bill %d",bill1);
				break;
			case'S':
				printf("You have ordered Sandwich ");
				bill1=S*qu;
				printf("Your Bill %d",bill1);
				break;
						
		break;
		}
		tb=bill+bill1;
		printf("\nTotal bill is %d",tb);
		
		}
		else{
			printf("Maximun choices should be 2");
		}
		printf("\nThankyou for the order have a nice day ");
}
