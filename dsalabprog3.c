#include <stdio.h>
int main(){
    int size;
    int arr[3][3];
    int i,j;
    printf ("Enter elements of array :");
   for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int transpose[3][3];
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    printf("\nOriginal Matrix:\n");
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
