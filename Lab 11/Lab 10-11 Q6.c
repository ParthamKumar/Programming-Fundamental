#include<stdio.h>
struct trans{
	float length;
	float width;
	float height;
}box1[10];

int main(){
	
	int n,arr[10],i;
	float vol;
	
	printf("Enter the  number of boxes: ");
	scanf(" %d",&n);
	
	for(i=1;i<=n;i++){
		printf("\nEnter the lenght of box%d :",i);
		scanf("%f",&box1[i].length);
		
		printf("Enter the width of box%d :",i);
		scanf("%f",&box1[i].width);
		
		printf("Enter the height of box%d :",i);
		scanf("%f",&box1[i].height);
		
			if((box1[i].height)>41){
				printf("\nThis Box can not cross the tunnel");
			}
		
		vol=(box1[i].width)*(box1[i].length)*(box1[i].height);
		printf("\nVolume is %f",vol);
		
	}
}
