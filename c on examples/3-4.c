#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char autoPopulate = 0;

int CheckInputMax ( int max) // checks if number is 
{
    int input;
	scanf("%d",&input);

	while (input > max || input < 1){
		printf("\nnumber has to be less than %d\n",max);
		scanf("%d",&input);
	}
    return input;
}

void populateMatrix( int (*matrix)[100], int r, int c)
{
    int i,j;
    for (i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
            if(autoPopulate)
            {
                matrix[i][j]=rand() % (r + 1 - 1) + c;
                printf("%d ", matrix[i][j]);
                if(j==c-1)
                {
                    printf("\n");
                }
            } else
            {
            printf("enter element a[%d][%d]: ", i+1, j+1);
            scanf("%d", matrix[i][j]);
            // program just exits after 1 element on windows
            }
        }
    }
}

int main ()
{
    int r,c, a[100][100], b[100][100], sum[100][100], i, j;
    printf ("Enter number of strings from 1 to 100: ");
    r = CheckInputMax (100);
    printf("Enter number to columns: ");
    c = CheckInputMax (100);
    // check matrix size, if its too big, then auto populate
    if (r > 6 || c > 6)
        autoPopulate = 1;
    printf("\nPopulating the first matrix:\n");
    populateMatrix( a, r, c);
    printf("\nPopulating the second matrix:\n");
    populateMatrix(b, r, c);

    // addition of matrix
    for (i=0; i<r; ++i)
        for (j=0; j<c;++j)
        {
            sum[i][j]=a[i][j] + b[i][j];
        }
    // output result
    printf("\nsum of 2 matrixes is: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d ", sum[i][j]);
            if(j==c-1)
            {
                printf("\n");
            }
        }
}
/*
в упражнении нужно было просто сложить 2 матрицы.
что я добавил от себя - проверка на слишком большую или маленькую матрицу,
                      - автозаполенение матрицы (если строк или столбцов больше 6, для экономии времени)
                      - ввод элементов матриц в отдельной функции, для сокращения повторяющегося кода
*/
