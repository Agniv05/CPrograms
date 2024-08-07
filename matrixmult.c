#include <stdio.h>
 // Input first matrix
 int main(){
      int m, n, p;
      // Get dimensions of the matrices
    printf("Enter the number of rows and columns of the first matrix (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of columns of the second matrix (p): ");
    scanf("%d", &p);
    int i,j,k;
     int A[10][10], B[10][10], C[10][10];
     printf("Enter the elements of the first matrix:\n");
     for ( i = 0; i < m; i++) {
      for ( j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
      }
    }

    // Input second matrix
    printf("Enter the elements of the second matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
     // Initialize the result matrix with zeros
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<p;j++){
            for (k=0;k<n;k++){
                C[i][j] +=A[i][k]*B[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

 }
