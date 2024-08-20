#include<stdio.h>
int main(){
	int x1,x2,x3,s,i,sum;
	
	x1=0;
	x2=1;
	x3=0;
	s=0;
	sum=0;
	
	for(x3=1;x3<10000;x3=x1+x2){
		
		x1=x2;
		x2=x3;
		printf("%d,",x1);
	if(x1%3==0||x1%5==0||x1%7==0){
	sum=sum+x1;
	}}
	printf("\n sum is : %d",sum);
}
