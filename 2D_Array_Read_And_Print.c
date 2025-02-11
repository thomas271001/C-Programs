#include <stdio.h>

void main() 
{
    int i,j,row,column;
    printf("Enter the Row Lenght and Column Lenght of the Array:");
    scanf("%d %d",&row,&column);
    int array[row][column];
    for (i=0; i<row; i++) 
	{
		for (j=0; j<column; j++)
	    {
		  printf("Enter the  %d,%d Element:",i,j);
		  scanf("%d",&array[i][j]);
		   
	    }
    }
    printf("Print the Array:\n");
    for (i=0; i<row; i++) 
	{
		for (j=0; j<column; j++)
	    {
		 printf("%d\t", array[i][j]);
	    }
	    printf("\n");
    }

}

