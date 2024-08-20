#include<stdio.h>
int main (){
	int num,c,sum;
	c=1;
	sum=0;
	
	printf("Enter number ");
	scanf("%d",&num);
	
	while(c<num){
		if(num%c==0){
			sum=sum+c;
		}
		c=c+1;
	}
	if(sum==num){
		printf("perfect number");
	}
	else{
		printf("not perfect number");
	}
}
