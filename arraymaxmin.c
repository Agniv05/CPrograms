#include <stdio.h>
int main(){
  int size;
  printf ("Enter size of array");
  scanf ("%d", &size);
  printf ("Enter elements of array :");
  int homearr[size];
  for (int i=0;i<size;i++){
    scanf ("%d",&homearr[i]);
  }
  int max=homearr[0];
  int min=homearr[0];
  for (int j=0;j<size;j++){
    if (max<homearr[j]){
      max=homearr[j];
    }
    if (min>homearr[j]){
      min=homearr[j];
    }
  }
  printf ("Maximum element in array = %d",max);
  printf ("Minimum element in array = %d",min);
  return 0;
}
