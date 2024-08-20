#include <stdio.h>
#include<string.h>

void fun(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", A, B);
		return;
	}
	fun(n-1, A, C, B);
	printf("\n Move disk %d from rod %c to rod %c", n, A, B);
	fun(n-1, C, B, A);
}

int main()
{
	int n;
	printf("Enter the Number of Disks: ");
	scanf("%d",&n);
	
	fun(n,'A', 'C', 'B');
	return 0;
}

