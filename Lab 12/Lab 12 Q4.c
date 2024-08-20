#include<stdio.h>
#include<stdlib.h>
struct client{
	char name[50];
	int age;
}wc[3],rc[3];
int main(){
	FILE *fptr;
	int i;
	fptr=fopen("client.txt","wb");
	for(i=0;i<3;i++){
		printf("Enter the name of client: ");
		fflush(stdin);
		gets(wc[i].name);
		
		printf("Enter the age: ");
		scanf("%d",&wc[i].age);
		
	}
	fwrite(wc,sizeof(wc),1,fptr);
	fclose(fptr);
	
	fptr=fopen("client.txt","rb");
	fread(rc,sizeof(rc),1,fptr);
	for(i=0;i<3;i++){
		printf("name %s    Age %d\n",rc[i].name,rc[i].age);
		
	}
	fclose(fptr);
}
