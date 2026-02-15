void setZeroes(int** matrix, int matrixSize, int* matrixColSize)
{
    int m = matrixSize;
    int n = matrixColSize[0];

    int zeroRow[m];
    int zeroCol[n];

    for(int i = 0; i < m; i++)
        zeroRow[i] = 0;

    for(int j = 0; j < n; j++)
        zeroCol[j] = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 0)
            {
                zeroRow[i] = 1;
                zeroCol[j] = 1;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(zeroRow[i] == 1 || zeroCol[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
