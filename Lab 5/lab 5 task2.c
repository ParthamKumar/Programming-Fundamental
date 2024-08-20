#include<stdio.h>
int main (){
	int num1,num2;
	char opreation;
	printf("Enter num1 = ");
	scanf("%d",&num1);
	printf("Enter num2 = ");
	scanf("%d",&num2);
	printf("press \n + for addition \n - for subtraction \n * for multiplication \n / for devision\n");
	scanf(" %c",&opreation);
	switch (opreation){
		case '+':
			printf("sum = %d\n",num1+num2);
			break;
		case '-':
			printf("diff = %d\n",num1-num2);
			break;
		case '*':
			printf("multiplication = %d\n",num1*num2);
			break;
		case '/':
			printf("div = %d\n",num1/num2);
			break;
		default:
			printf("Enter valid opreation\n");
		}
	}
