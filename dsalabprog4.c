#include <stdio.h>
int main(){
    int s;
    printf ("Enter size of square matix :");
    scanf ("%d",&s);
    int a[s][s];
    int i,j;
    for (i=0;i<s;i++){
        for (j=0;j<s;j++){
            if (i==j){
                a[i][j]=0;
            }
            else if (i>j){
                a[i][j]=-1;
            }
            else{
                a[i][j]=1;
            }
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
