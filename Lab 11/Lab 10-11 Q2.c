#include<stdio.h>
void swap(int *x,int *y, int*z){
	int temp;
	
	temp=x;
	x=y;
	y=z;
	z=temp;
	printf("%d  %d  %d ",x,y,z);
	
}
int main(){
	int a=5,b=10,c=15;
	int *x,*y,*z;
	
	x=a;
	y=b;
	z=c;
	swap(x,y,z);
}
