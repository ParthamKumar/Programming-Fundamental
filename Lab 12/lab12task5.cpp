#include<stdio.h>
#include<stdlib.h>
int main(){
	
	FILE *ptr;
	char c;
	int ct=0;
	ptr=fopen("read.txt","r");
	if(ptr==NULL){
		printf("Error");
		return 0;
	}
	else{
		do{
			c=fgetc(ptr);
			ct++;s
		}while(c!=EOF);
	fclose(ptr);
	printf("Number of characters is %d ",ct);
	}
	return 0;
}
