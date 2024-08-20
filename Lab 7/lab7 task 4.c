#include<stdio.h>
int main(){
	int num,i,j;
	int flag;
	printf("Inpur enter number: ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++){
		flag=1;
		for(j=2;j<i-1;j++){
			if(i%j==0)
			flag=0;
			}
			if(flag==1)
			printf("%d  ",i);
		}
			
		
	}
	

