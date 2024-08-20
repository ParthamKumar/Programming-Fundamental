#include<stdio.h>
int main (){
	char wd,v;
	printf("Is it weekday (y/n): ");
	scanf("%c",&wd);
	fflush(stdin);
	printf("Is this vication (y/n): ");
	scanf("%c",&v);
	
	switch (wd){
		case 'n':
			switch(v){
				case 'n':
					printf("SleepIn: True");
					break;
				case 'y':
					printf("SleepIn: True");
					break;
			}
			break;
		case 'y':
			switch(v){
				case 'n':
					printf("SleepIn: False");
					break;
			}
			break;
	}
}
