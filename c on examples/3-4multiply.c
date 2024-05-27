#include <stdio.h>
#include <stdlib.h>

void populateMatrix( int (*matrix)[10], int r, int c)
{
    int i,j;
    for (i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
            matrix[i][j]=rand() % (r + 1 - 1) + c;
            printf("%d ", matrix[i][j]);
            if(j==c-1)
            {
                printf("\n");
            }
        }
    }
}

int main()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;
    c1=1;   
    // check if we can multiply those matrix
    while(c1 != r2)
    {
        printf ("Columns of 1st matrix must be equals rows of 2nd\n");
        printf("Enter rows and columns of first matrix: ");
        scanf ("%d %d", &r1, &c1);
        printf("Enter rows and columns of second matrix: ");
        scanf ("%d %d", &r2, &c2);           
    }
    printf("Populating 1st matrix: \n");
    populateMatrix( a, r1, c1);
    printf("Populating 2nd matrix: \n");
    populateMatrix( b, r2, c2);
    //multiply matrix
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                result[i][j]=a[i][k]*b[k][j];
            }
    printf("\nresult of multiply:\n");
    for(i=0;i<r1;++i)
        for(j=0; j<c2; ++j)
        {
            printf("%d ",result[i][j]);
            if(j==c2-1)
                printf("\n");
        }        
    return 0;
}