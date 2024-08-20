#include<stdio.h>
#include<string.h>
int main()
{
	char string[50],rep,corr;
	int i;
	printf("Enter the String:");
	scanf("%s",&string);
	
	printf("The character you want to replace :");
	scanf(" %c ",&rep);
	
	printf("The character you want to replace With :");
	scanf(" %c ",&corr);
	
	for(i=0;i<50;i++){
		if (string[i]==rep){
			string[i]=corr;
		}
		
		
	}
	printf("%s",string);
		
}
