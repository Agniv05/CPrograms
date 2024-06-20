#include <stdio.h>
int main(){
  int n;
  printf ("Enter number");
  scanf("%d",n);
  int s=0;
  while (n>0){
    n=n/10;
    s=s+1;
  }
}
