#include<stdio.h>
int main(){
	
	int num;
	printf("Enter the number  ");
	scanf("%d",&num);
	int ld=num%10;
	ld==0?printf("Last digit is zero"):printf("Last digit is non zero");
}
