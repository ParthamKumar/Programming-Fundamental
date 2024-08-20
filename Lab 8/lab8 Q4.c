#include<stdio.h>
int main()
{
	int size=5;
	int arr[5]={2,3,1,2,3};
	int k=0;
	bool aux_=false;
	int aux_ind=0;
	int aux[5]={0,0,0,0,0};
	for(int i=0;i<size;i++)
	{
		k=0;
		for(int j=0;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				k++;
			}
		}
		if(k>1)
		{
			
		
			for(int f=0;f<5;f++)
			{
				if(aux[f]==arr[i])
				{
					aux_=true;
				
				}
			}
			if(!aux_)
			{
				aux[aux_ind]=arr[i];
				aux_ind++;
			}
			aux_=false;
		}
		
	}
	
	printf("The number occors more than one are:");
	for(int i=0;i<aux_ind;i++)
	{
		printf("%d ",aux[i]);
	}
}
