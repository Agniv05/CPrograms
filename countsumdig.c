#include <stdio.h>
int main(){
  int n,a;
  printf ("Enter number");
  scanf("%d",&n);
  int s=0;
  int p=0;
  while (n>0){
    a=n%10;
    p=p+a;
    n=n/10;
    s=s+1;
  }
  printf ("No. of digits =%d",s);
  printf ("Sum of digits =%d",p);
  return 0;
}
