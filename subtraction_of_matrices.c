#include <stdio.h>
#define MAX 10 // Maximum size of the matrices

// Function to read a matrix from the user
void read_matrix(int mat[MAX][MAX], int row, int col) {
  printf("Enter the elements of the matrix (%d x %d):\n", row, col);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
}

// Function to print a matrix to the console
void print_matrix(int mat[MAX][MAX], int row, int col) {
  printf("The matrix is:\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
}

// Function to subtract two matrices and store the result in another matrix
void subtract_matrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      result[i][j] = mat1[i][j] - mat2[i][j];
    }
  }
}

// Main function
int main() {
  int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX]; // Declare the matrices
  int row, col; // Declare the variables to store the dimensions of the matrices

  printf("Enter the number of rows and columns of the matrices: ");
  scanf("%d%d", &row, &col); // Read the dimensions from the user

  // Read the first matrix from the user
  printf("For the first matrix,\n");
  read_matrix(mat1, row, col);

  // Read the second matrix from the user
  printf("For the second matrix,\n");
  read_matrix(mat2, row, col);

  // Subtract the matrices and store the result in another matrix
  subtract_matrices(mat1, mat2, result, row, col);

  // Print the result matrix to the console
  printf("The result of subtraction is:\n");
  print_matrix(result, row, col);

  return 0;
}
