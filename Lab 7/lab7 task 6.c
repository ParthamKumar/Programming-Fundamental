#include<stdio.h>
int main(){
	int a,b,choice,i;
	
	printf("Input number ");
	scanf("%d",&a);
	printf("Input number ");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		if(i<=9){
			
		switch(i){
			case 1 : {
					printf("\none");
					break;
					}
			case 2: 
					printf("\ntwo");
					break;
			case 3:
					printf("\nthree");
					break;
			case 4: 
					printf("\nfour");
					break;
			case 5: 
					printf("\nfive");
					break;
			case 6: 
					printf("\nsix");
					break;
			case 7: 
					printf("\nseven");
					break;
			case 8: 
					printf("\neight");
					break;
			case 9: 
					printf("\nnine");
					break;
			case 0: 
					printf("\nzero");
					break;}
			}
			
		else if(i>9){
			if(i%2==0){
				printf("\nEven ");
			}
			else{
				printf("\nOdd");
			}
			
		}
		}
		
}
	
	

