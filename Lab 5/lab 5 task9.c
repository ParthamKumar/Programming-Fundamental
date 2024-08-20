#include<stdio.h>
int main(){
	float a1,a2,a3,sum;
	
	printf("Enter angles a1:  ");
	scanf("%f",&a1);
	
	printf("Enter angles a2:  ");
	scanf("%f",&a2);
	
	printf("Enter angles a3:  ");
	scanf("%f",&a3);
	
	sum = a1+a2+a3;
	if(sum==180){
		if((a1==a2) && (a1==a3)&& (a2==a3)){
			printf("Triangle is Equilateral ");
		}
		else if((a1==a2) || (a1==a3)|| (a2==a3)){
			printf("Triangle is Isosceles ");
		}
		else if((a1!=a2) && (a1!=a3)&& (a2!=a3))
		printf("Triangle is Scalene ");
		
	}
	else{
		printf("Enter correct angles ");
	}
}
