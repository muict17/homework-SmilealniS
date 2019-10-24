#include<stdio.h>

int main()
{
    int n, m, one=0, zero=0;

    do
    {
        printf("Input number of Rows for the matrix: ");
        scanf("%d", &n);

        printf("Input number of Columns for the matrix: ");
        scanf("%d", &m);
    } while(n!=m);

    int matrix[n][m];

    printf("Input elements in the first matrix:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if(i==j)
            {
                if(matrix[i][j]==1)
                {
                    one++;
                }
            } else
            {
                if(matrix[i][j]==0)
                {
                    zero++;
                }
            }
        }
    }

    printf("The matrix is:\n");
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    if(one==n && zero==(n*m)-n)
    {
        printf("The matrix is an identity matrix.\n");
    } else printf("The matrix is not an identity matrix.\n");

    return 0;
}