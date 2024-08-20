#include<stdio.h>
#include<math.h>
long long int reversed(long long int);
int main(){
    long long int num, output;
    printf("Enter an integer");
    
    scanf("%lld",&num);
    
    output=pow(num,reversed(num));
    
    
    //printf("%lld\n",output);
    
    output=output%1000000007;
    
    printf("%lld",output);
    
    return 0;

}
long long int reversed(long long int num){
    long long int reverse=0;
    long long int temp=num;
 
    while(temp!=0){
        reverse= (reverse*10)+(temp%10);
        temp=temp/10;
    }
    printf("%lld\n",reverse);
    
    return reverse;

}
