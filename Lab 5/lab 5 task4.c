#include<stdio.h>
int main (){
	 float amount,savedamount,discountedprice;
	 printf ("input total expence ");
	 scanf("%f",&amount);
	 if (amount >=500 && amount <2000){
	 	savedamount = 0.05*amount;
		discountedprice = amount-savedamount;
		  printf("amount %f\n savedamount %f\n discountedprice%f",amount,savedamount,discountedprice);
	 }
	else if (amount >=2000 && amount <4000){
	 	savedamount = 0.10*amount;
		discountedprice = amount-savedamount;
		  printf("amount %f\n savedamount %f\n discountedprice%f",amount,savedamount,discountedprice);
	 }
	 	else if (amount >=4000 && amount <6000){
	 	savedamount = 0.35*amount;
		discountedprice = amount-savedamount;
		  printf("amount %f\n savedamount %f\n discountedprice%f",amount,savedamount,discountedprice);
	 }
}
