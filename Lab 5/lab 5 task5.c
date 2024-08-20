#include<stdio.h>
int main (){
	int sunshine;
	printf ("Current sunshine = ");
	scanf ("%d",&sunshine);
	if (sunshine> 0 && sunshine <1000){
	if(sunshine>500){
	printf(" exposed in sunshine");}
 	
 	else if(sunshine>=00 && sunshine <100){
	printf(" it is is evening");
 	}
 	else if(sunshine>=100 && sunshine <=500){
	printf(" it is is lighting");
 	}
	}
	else{
	printf (" invald entery");}

}
