#include <stdio.h>
int array[100][100];

void calRowAvg(int array[100][100], int row, int column) 
{
	int i,j;
    for (i = 0; i < row; i++) {
        int sum = 0;
        for (j = 0; j < column; j++) {
            sum += array[i][j];
        }
        double average = (double)sum / column;
        printf("Average of Row %d: %.2f\n", i+1, average);
    }
}

void calColumnAvg(int array[100][100], int row, int column)
{
	int i,j;
    for (j = 0; j < column; j++) {
        int sum = 0;
        for (i = 0; i < row; i++) {
            sum += array[i][j];
        }
        double average = (double)sum / row;
        printf("Average of Column %d: %.2f\n", j+1, average);
    }
}

void main() {
    int row, column,i,j;
    printf("Enter the Row Length and Column Length of the Array: ");
    scanf("%d %d", &row, &column);
    array[row][column];
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("Enter the %d,%d Element: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    calRowAvg(array,row,column);
    calColumnAvg(array,row,column);
}

