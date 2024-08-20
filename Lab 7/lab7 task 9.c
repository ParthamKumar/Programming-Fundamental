#include<stdio.h>
int main(){
	
	int num=21;
	
	printf("RULE  You can pick Maximun 4 sticks\nThere are 21 sticks\n");
	printf("Last person to pick the stick will lose the game\n");
	printf("How many sticks would you pick ");
	scanf("%d",&num);
	
	if(num==1){
		num=num-19;
		printf("Computer picked 19 sticks\nThere is 1 stick remaining\nYOU LOSS THE GAME");
	}
	else if(num==2){
		num=num-18;
		printf("Computer picked 18 sticks\nThere is 1 stick remaining\nYOU LOSS THE GAME");
	}
	else if(num==3){
		num=num-17;
		printf("Computer picked 17 sticks\nThere is 1 stick remaining\nYOU LOSS THE GAME");
	}
	else if(num==4){
		num=num-16;
		printf("Computer picked 16 sticks\nThere is 1 stick remaining\nYOU LOSS THE GAME");
	}
	else {
		printf("Pick less than 4 sticks");
	}
	


}
