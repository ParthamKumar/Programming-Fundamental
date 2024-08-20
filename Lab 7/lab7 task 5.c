#include<stdio.h>
int main(){
	int x1,x2,r;
	printf("Enter the number of rows ");
	scanf("%d",&r);
	for(x1=r;x1>=1;x1--){
		for(x2=1;x2<=x1;x2++){
			printf("%d",x1);
		}
		printf("\n");
	}
	
}
