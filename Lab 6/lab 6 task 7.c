#include<stdio.h>
int main (){
	float g;
	
	printf("Enter the Grade avg ");
	scanf("%f",&g);
	
	if(g<0.0 || g>4.0){
	printf("Input correct Grade between 0 to 4 ");
	}
	else{
		if(g>=0.0&&g<=0.99){
			printf("Failed symester--Registration Suspended");
		}
		else if(g>=1.0&&g<=1.99){
			printf("On probation for next Semester");
		}
		else if (g>=2.0&&g<=2.99){
			printf("(no message)");
		}
		else if (g>=3.0&&g<=3.49){
			printf("Dean's list for semester");
		}
		else if(g>=3.5&&g<=4.00){
		printf("Highest Honors for semester");
		}
	}
}
