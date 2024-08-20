#include<stdio.h>
  
int main()  
{  
    int num, c = 1, r, sum;  
  
    while(c <= 500)  
    {  
        num = c;  
        sum = 0;  
  
        while(num)  
        {  
            r = num % 10;  
            sum = sum + (r*r*r);  
            num = num / 10;  
        }  
  
        if(c == sum)  
        {  
            printf("%d is a Armstrong number\n", c);  
        }  
  
        c++;  
    }  
  
     return 0;  
}  
