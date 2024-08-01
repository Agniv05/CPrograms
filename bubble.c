#include <stdio.h>
int main(){
int length;
printf ("Enter length of array :");
scanf ("%d",&length);
int arr[length];
printf ("Enter elements of array");
for (int i=0;i<length;i++){
  scanf ("%d", &arr[i];
}
for (int j=0;j<length-1;j++){
  for (int k=0;k<length-1;k++){
    if arr[k]>arr[k+1]{
      int t=arr[k];
      arr[k]=arr[k+1];
      arr[k+1]=t;
    }
  }
}
printf ("Displaying new array :");
for (int m=0;m<length;m++){
  printf ("%d",arr[m];
}
}
