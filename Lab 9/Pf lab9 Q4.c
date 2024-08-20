#include<stdio.h>
int main (){
	char ary[50];
	int u=1, l=0, s=0,i,j;
	
	gets(ary);
	
	
	for (i=1;ary[i]!='\0';i++){
		j=ary[i];
		
		if (65<=j && j<=90){
			u=u+1;
		}
		if(97<=j && j<=122){
			l=l+1;
		}
		if(j==' '){
			s=s+1;
		}
		
		
	}
		printf("%d\n",u);
		printf("%d\n",l);
		printf("%d\n",s);
		
}
