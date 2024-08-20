#include<stdio.h>
int main (){
	
	char coffee,d;
	printf("Type of coffee Black(B) or White(W): ");
	scanf("%c",&coffee);
	fflush(stdin);
	printf("Is coffee double (y/n): ");
	scanf("%c",&d);
	
	switch(coffee){
		case 'B':
			switch(d){
				case 'y':
					printf("Put water  30 min\nSugar  30 min\nMix well  37.5 min\nAdd coffee  27.5 min\nAdd milk -min\nMix well  37.5 min");
					break;
				case 'n':
					printf("Put water  20 min\nSugar  20 min\nMix well  25 min\nAdd coffee  15 min\nAdd milk -min\nMix well  25 min");
					break;
			}
			break;
		case 'W':
			switch(d){
				case 'y':
					printf("Put water  27.5 min\nSugar  27.5 min\nMix well  30 min\nAdd coffee  3 min\nAdd milk 6 min\nMix well  30 min");
					break;
				case 'n':
					printf("Put water  15 min\nSugar  15 min\nMix well  20 min\nAdd coffee  2 min\nAdd milk 4 min\nMix well  20 min");
					break;
			}
		break;	
			
	}
		
	
}
