int recpor(int a){
  if (a==1){
    return 1;
  }
  else{
    return a*recpor(a-1);
  }
}
int main(){
  int n;
  printf ("enter no.");
  scanf ("%d",&n);
  int b=recpor(n);
  printf ("factorial= %d",b);
  return 0;
}
