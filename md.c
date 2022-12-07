double determinant(double **matrix, int n) {
  // Base case: 2x2 matrix
  if (n == 2) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
  }

  // Recursive case: nxn matrix
  double det = 0;
  for (int i = 0; i < n; i++) {
    // Create a submatrix by removing the ith row and column
    double **submatrix = malloc((n - 1) * sizeof(double *));
    for (int j = 0; j < n - 1; j++) {
      submatrix[j] = malloc((n - 1) * sizeof(double));
    }
    for (int j = 1; j < n; j++) {
      int k = 0;
      for (int l = 0; l < n; l++) {
        if (l == i) continue;
        submatrix[j - 1][k] = matrix[j][l];
        k++;
      }
    }

    // Add the determinant of the submatrix to the total
    det += (i % 2 == 0 ? 1 : -1) * matrix[0][i] * determinant(submatrix, n - 1);

    // Free the memory for the submatrix
    for (int j = 0; j < n - 1; j++) {
      free(submatrix[j]);
    }
    free(submatrix);
  }
  return det;
}
