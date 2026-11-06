#include <stdio.h>
int fb(int n);
int main()
{
  
    printf("%d",fb(6));
  return 0;
}
int fb(int n)
{
  if(n==0)
  {
    return 0;
  } 
  if(n==1)
  {
    return 1;
  }
  int fib1=fb(n-1);
    int fib2=fb(n-2);
    int fibt=fib1+fib2;
    //printf("fib of %d is %d",n,fibt);
    return fibt;
}