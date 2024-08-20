#include<stdio.h>
int main(){
	int i,min,max=0,num[10]={4,1,6,8,10,21,8,9,2,6};
	for(i=0;i<10;i++){
		if(num[i]>max){
			max=num[i];
		}	
	}
	min=max;
	for(i=0;i<=10;i++){
		if(num[i]<min){
			min=num[i];
		}

	}
	printf("maximun = %d\n",max);
	printf("minimum = %d",min);
	
	
	
	
	
}
