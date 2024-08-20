#include<stdio.h>
#include<string.h>
int fat (int a,int b);
int main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	//fat (num,num);
	printf(" %d\n %d",num,fat(num,num));
}
int fat(int a,int arb){
	
	if (arb==1){
		return a;
	}
	else{
		return fat(a*(arb-1),(arb-1));
	}
}
