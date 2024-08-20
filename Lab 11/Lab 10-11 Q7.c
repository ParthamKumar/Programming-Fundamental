#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int WordCount(char *text, int *size)
{
	int i;
    
	for (i=0;i<20;i++)
    {printf("%c",*(text++));}
    
	printf("%d ", *size);
    
}

int main()
{
	
	char arr1[100];
    
	printf("please input font type: ");
    scanf("%s",&arr1);
    
	char *x=arr1;

    int arr2[1];
    
    printf("Enter size of fonts: ");
    scanf("%d",&arr2);
    
    int *y=arr2;

    WordCount(arr1,arr2);
    
	return 0;

}
