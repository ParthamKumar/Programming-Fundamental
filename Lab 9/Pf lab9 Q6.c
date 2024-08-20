#include<stdio.h>
void lcm(int,int);
int gcd(int,int);


int main (){
	int n,d=2,a,b;
	printf("Enter the number: ");
	
	scanf("%d",&n);
	printf("LCM = ");
	lcm(n,d);
	printf("\nEnter two numbers:\n");
	scanf("%d %d",&a,&b);
	if(a>b)
       printf("GCD = %d",gcd(a,b));
    else
       printf("GCD = %d",gcd(b,a));
	
	
}
void lcm(int n,int d){
	if(n==1)
	return;
	else
	{
		if(n%d==0)
		{
			n=n/d;
			printf("%d ",d);
		}
		else
		d=d+1;
		
		lcm(n,d);
	}
	
	}
int gcd(int large,int small)
{
    if(small==0)
       return large;
    else
       return gcd(small,large%small);
   }

