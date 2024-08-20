#include<stdio.h>
int main (){
	int num,choice;
	printf("Input Number: ",num);
	scanf("%d",&num);
	
	switch (num){
	case 1:
	printf("one",num);
	break;
	
	case 2:
	printf("Two",num);
	break;
	
	case 3:
	printf("Three",num);
	break;
	
	case 4:
	printf("Four",num);
	break;
	
	case 5:
	printf("Five",num);
	break;
	
	case 6:
	printf("Six",num);
	break;
	
	case 7:
	printf("seven",num);
	break;
	
	case 8:
	printf("Eight",num);
	break;
	
	case 9:
	printf("Nine",num);
	break;
	default:
		printf("number is > 9",num);
	}
}
