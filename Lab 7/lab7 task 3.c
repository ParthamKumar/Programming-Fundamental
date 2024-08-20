#include<stdio.h>
int main(){
	int num1,num2,d=1,i,max=0,min=0;
	
	printf("Enter the num1 ");
	scanf("%d",&num1);
	
	printf("Enter the num2 ");
	scanf("%d",&num2);
	printf("LCM is =");

	for(d=1;d<num1*num2;d++)
		if(d%num1==0&&d%num2==0)
		break;
		
			printf(" %d",d);
  	for(i=1; i<(num1<num2?num2:num1); i++)
		if(num1%i==0&&num2%i==0&&i>max){
			max=i;
		}
		printf("\nGCD is = %d",max);
	
}

