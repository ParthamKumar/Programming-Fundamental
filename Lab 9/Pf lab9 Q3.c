#include<stdio.h>
void swap(int a,int b){
	int x;
	x=a;
	a=b;
	b=x;
	
	printf("\n%d \n%d",a,b);
	
}
int main (){
	
	int a,b;
	printf("Enter number1: ");
	scanf("%d",&a);
	printf("Enter number2: ");
	scanf("%d",&b);
	swap(a,b);
}
