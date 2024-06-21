#include <stdio.h>
int maxno(int x, int y){
int z;
if (x>y){
z=x;
}
else{
z=y;
}
return z;
}
int main(){
int a,b;
printf ("Enter two no.");
scanf ("%d",&a);
scanf ("%d",&b);
int max;
max=maxno(a,b);
printf ("Maximum no. is %d",max);
return 0;
}
