#include <stdio.h>
int main(){
  int length;
  printf ("Enter length of array :");
  scanf ("%d",&length);
  int arr[length];
  printf ("Enter elements of array");
  for (int i=0;i<length;i++){//bubble sort
    scanf ("%d", &arr[i]);
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
    printf ("%d ",arr[m]);
  }
  int target;
  int fin=-1;//binary search
  printf ("Enter target :");
  scanf ("%d", &target);
  int left=0;
  int mid;
  int right = length-1;
  while (left<=right){
    mid=(left+right)/2;
    if (arr[mid]==target)
      fin=mid;
      break;
    else if (arr[mid]>target)
      right=mid-1;
    else
      left=mid+1;
  }
  if (fin<0)
    printf ("Element not present in array");
  else 
    printf ("Position of element in array is %d",&fin);
}
