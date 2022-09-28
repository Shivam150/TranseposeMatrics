#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10], m, n, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    // Storing elements of the matrix
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<m; ++i)
	{
		for(j=0; j<n; ++j)
        {
            printf("Enter element a [%d][%d]: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
	}
    // Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
    for(i=0; i<m; ++i)
    {
    	for(j=0; j<n; ++j)
        {
            printf("%d  ", a[i][j]);

        }printf("\n\n");
	}// Finding the transpose of matrix a
    for(i=0; i<m; ++i)
    {
    	for(j=0; j<n; ++j)
        {
            transpose[j][i] = a[i][j];
        }
	}
    // Displaying the transpose of matrix a
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<n; ++i)
	{
		for(j=0; j<m; ++j)
        {
            printf("%d  ",transpose[i][j]);
        }
        printf("\n\n");
	}
    return 0;
}
