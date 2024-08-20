#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float r1,r2,d;
	printf("x^2 = ",a);
	scanf("%f",&a);
	printf("x = ",b);
	scanf("%f",&b);
	printf("c = ",c);
	scanf("%f",&c);
	d = ((b*b)-4*(a*c));
	printf("d = %f\n",d);
	if(d>0){
		r1 = (-b+sqrt(d))/2*a;
		printf("r1 = %f\n",r1);
		r2 = (-b-sqrt(d))/2*a;
		printf("r2 = %f",r2);
	}
	else if(d==0){
		r1=r2=-b/2*a;
		printf("r1 = %f",r1);
	}
	else{
		printf("D < 0");
	}
}
