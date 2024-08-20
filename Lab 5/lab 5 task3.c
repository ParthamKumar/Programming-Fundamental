#include<stdio.h>
int main(){
char character;
char ascii;
printf(" Input any key  ");
scanf(" %c",&ascii);
if(ascii>= 65 && ascii <= 90){
printf(" Character is capital letter");
}
else if (ascii >=97 && ascii <=122){
printf("Character is small letter");
}
else if (ascii>=48 && ascii<= 57){ 
	printf("Character is number");}
else {
	printf ("Character is special key");
}
	
}
