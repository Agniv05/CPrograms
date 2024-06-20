#include <stdio.h>
int main(){
  int n;
  printf ("enter number :");
  scanf ("%d",&n);
  for (int i=2;i<n;i++){
   while(n%i == 0) 
     {
           printf("%d  ",i);
           n = n/i;
     }
  }
  if(n >2) {
   printf ("%d", n);
  }
  return 0;
}
        
