#include<stdio.h>
int main(){
	float f,c,p,tc,fc;
	
	printf("Enter calories ",c);
	scanf("%f",&c);
	printf("Enter fat grams is in food ",f);
	scanf("%f",&f);
	fc=f*9;
	tc=c+fc;
	p=fc/tc*100;
	if(c<0||f<0){
		printf("Wrong input of calories or fat grams should not be less than 1");}
	
	else if(c>tc){
		printf("either the calories or fat grams were incorrectly entered");}
		else {
			printf("percentage of calories = %f",p);
		}
	
}
	
