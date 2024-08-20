#include<stdio.h>
int main(){

int num,sum,size,i,j;
printf("Enter number: ");
scanf("%d",&num);
printf("Enter size of array: ");
scanf("%d",&size);

int arr[size];

for(i=0;i<size;i++){
printf("Enter element %d: ",i+1);
scanf("%d",&arr[i]);
}

for(i=0;i<size;i++){
sum = arr[i];
j=i+1;
while(sum<num && j<size){
sum+=arr[j];
j++;
}
if(sum == num){
printf("from %d to %d",i+1,j);
	return 0;
}

}


}
