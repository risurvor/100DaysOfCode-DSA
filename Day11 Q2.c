int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes) {

    int rows = matrixSize;
    int cols = matrixColSize[0];

    *returnSize = cols;

    *returnColumnSizes = (int*)malloc(cols * sizeof(int));
    for (int i = 0; i < cols; i++)
        (*returnColumnSizes)[i] = rows;

    int** ans = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++)
        ans[i] = (int*)malloc(rows * sizeof(int));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            ans[j][i] = matrix[i][j];

    return ans;
}
