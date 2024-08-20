#include<stdio.h>
main(){
	int x;
 
   x = 5 > 8 ? 10 : 1 ;
    printf("Value of x:%d", x);
    return 0;
}

//Periority of less than sign "<" is greater than not equal sign "!="
//hence at first less than or greater than would be checked. 
