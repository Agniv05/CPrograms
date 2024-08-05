#include <stdio.h>
int main(){
    int size;
    printf ("Enter size of array : ");
    scanf ("%d",&size);
    int arr[size];
    printf ("Enter elements of array :");
    for (int i=0;i<size;i++){
        scanf ("%d", &arr[i]);
    }
    int e;
    printf ("Enter element to search :");
    scanf ("%d", &e);
    int min=arr[0];
    int t=-1;
    for (int j=0;j<size;j++){
        if (arr[j]==e){
            t=j;
        }
        if (arr[j]<min){
            min=arr[j];
        }
    }
    if (t<0){
        printf ("Element not found. ");
        printf ("\n");
    }
    else{
        printf ("Position of element is : %d",t);
        printf ("\n");
        if (min<arr[t]){
            printf ("It is not smallest element. ");
        }
        else{
            printf ("It is smallest element. ");
        }
    }
}
