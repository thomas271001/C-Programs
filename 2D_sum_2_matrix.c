// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int i, j,row,column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int array1[row][column];
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < column; j++) 
		{
            printf("Enter element of array[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Two-dimensional array is:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < column; j++)
		{
            printf("%d ", array1[i][j]);
        }
        printf("\n");	
    }
    int array2[row][column];
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < column; j++) 
		{
            printf("Enter element of array1[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    printf("Two-dimensional array is:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < column; j++)
		{
            printf("%d ", array2[i][j]);
        }
        printf("\n");	
    }
    int array3[row][column];
    printf("The resultant matrix after adding two matrix \n");
    for(i=0;i<row;i++)
    {   
        printf("\n");
    	for(j=0;j<column;j++)
    	{
    		if(array1[i][j]==array2[i][j]){
    			array3[i][j]=array1[i][j]+array2[i][j];
    			printf(" %d ",array3[i][j]);  
			}
    	   
		}
    	
	}      
}


