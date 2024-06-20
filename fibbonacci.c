#include <stdio.h>
int main(){
 int a=0;
 int b=1;
 int c=a+b;
 while (c<=100){
  if (c>=1){
   printf ("%d  ",c);
  }
  a=b;
  b=c;
  c=a+b;
 }
 return 0;
}
