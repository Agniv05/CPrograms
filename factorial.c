#include <stdio.h>
int fact(int x){
  if (x<=1){
    return 1;
  }
  return (x*fact(x-1));
}
int main(){
  int a;
  printf ("Enter no. :");
  scanf ("%d",&a);
  int f=fact(a);
  printf ("factorial = %d",f);
  return 0;
}
