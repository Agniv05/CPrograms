#include <stdio.h>

// Function to get cofactor of A[p][q] in temp[][]. n is current dimension of A[][]
void getCofactor(int A[10][10], int temp[10][10], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = A[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Recursive function for finding determinant of matrix. n is current dimension of A[][]
int determinant(int A[10][10], int n) {
    int D = 0; 
    if (n == 1)
        return A[0][0];

    int temp[10][10]; 

    int sign = 1; 

    for (int f = 0; f < n; f++) {
        getCofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return D;
}

// Function to get adjoint of A[10][10] in adj[10][10]
void adjoint(int A[10][10], int adj[10][10], int N) {
    if (N == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign = 1, temp[10][10];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            getCofactor(A, temp, i, j, N);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, N - 1);
        }
    }
}

// Function to find inverse of matrix A[N][N]. Inverse is stored in inverse[N][N]
int inverse(int A[10][10], float inverse[10][10], int N) {
    int det = determinant(A, N);
    if (det == 0) {
        printf("Singular matrix, can't find its inverse");
        return 0;
    }

    int adj[10][10];
    adjoint(A, adj, N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            inverse[i][j] = adj[i][j] / (float) det;

    return 1;
}

// Function to display the matrix
void display(float A[10][10], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the dimension of the square matrix: ");
    scanf("%d", &N);

    int A[10][10];
    float inv[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    if (inverse(A, inv, N)) {
        printf("The inverse of the matrix is:\n");
        display(inv, N);
    }

    return 0;
}
