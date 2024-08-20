#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	
	int n,*ptr,i,large=0;
	printf("Enter numbers: ");
	scanf("%d",&n);
	
	ptr = (int*) malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	//	printf("\n%d ",*ptr+i);
		
		if(*(ptr+i)>large){
			large=*(ptr+i);
		}
	}
	printf("%d",large);
	
}
