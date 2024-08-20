#include<stdio.h>
int main (){
	float u,bill,sc,na;
	int id;
	char  n[10];
	
	printf("Customer Id: ",id);
	scanf("%d",&id);
	
	printf("Customer Name:",n);
	scanf("%s",n);
	
	printf("Units Consumed:",u);
	scanf("%f",&u);
	
	if(u>0 && u<199){
		bill=u*16.20;
		printf("Your Bill Is = %.2f",bill);
	}
	else if(u>=200 && u<300){
		bill=u*20.10;
		printf("Your Bill Is = %.2f",bill);
	}
	else if(u>=300 && u<500){
		bill=u*27.10;
		printf("Your Bill Is = %.2f",bill);
	}
	else if(u>=500){
		bill=u*35.90;
		printf("Your Bill Is = %.2f\n",bill);
	}
if(bill>18000){
	sc = bill*0.15;
	printf("Surcharges = %.2f\n",sc);
}
na= bill+sc;
printf("Net Amount = %.2f",na);
	
}
