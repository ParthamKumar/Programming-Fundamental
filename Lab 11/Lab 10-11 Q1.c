#include<stdio.h>

int main(){
	
	int n[10],sum=0,i,x;
	int *p;
	 
	 p=n;

	for(i=0;i<10;i++){
	printf("Enter number");
	scanf("%d",p);
//	gets(p);
//	printf("%d\n  %d\n",p,*p);
	sum=sum+ *p;
	}
	
	printf("%d",sum);
}
