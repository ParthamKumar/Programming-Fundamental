#include <stdio.h>
void swap(char*a,char*b){
	char t=*a;
	*b=t;
}
void per(char s,int x,int y){
	int i;
	if(x==y){
		printf("%s\n",s);
	}
	else{
	
	for(i=x;i<=y;i++){
		swap(&s[x],&s[i]);
		per (s,x+1,y);
		swap(&s[x],&s[i]);
		}
	}
}
int main(){
	char s[10];
	printf("Enter string ");
	scanf("%s",s);
	printf("String is %s\n",s);
	printf("Permutations are:\n");
	per(s,0,2);
	
}
