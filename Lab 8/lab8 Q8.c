#include <stdio.h>

int main()
{
	int a,b, rows, columns, trc = 0;

        	printf("Enter Matrix Rows and Columns =  ");
	
    
        scanf("%d %d", &rows, &columns);

	    
        int Tra_arr[rows][columns];


	printf("Please Enter the Matrix elements =  \n");
	for (a = 0; a < rows; a++)
	            {
		                for (b = 0;b < columns;b++)
		{
	    		scanf("%d", &Tra_arr[a][b]);
		}
	}

	    for (a= 0; a < rows; a++)
	{
		for (b = 0;b < columns;b++)
		{
			if (a ==b)
			{
				trc = trc + Tra_arr[a][b];
			}
		}
	}

	printf("The trc Of the Matrix = %d\n", trc);
}
