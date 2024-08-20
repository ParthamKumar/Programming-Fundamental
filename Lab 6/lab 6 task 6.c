#include<stdio.h>
int main(){
	
	int ph;
	
	printf("Enter the Ph ");
	scanf("%d",&ph);
	
	if(ph>7){
		if(ph<12){
			printf("Alkaline");
		}
		else{
			printf("Very Alkaline");
		}
	}
	else if (ph==7){
		printf("Natural");
	}
	else if (ph>2){
		printf("Acidic");
	}
	else{
		printf("Very Acidic");
	}
}
