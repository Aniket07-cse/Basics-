#include <stdio.h>
int fibo(int);
int main()
{
  int i,terms=25;
  int n;
  for(i=1;i<=terms;i++)
  {
    printf("%d\n",fibo(n));
    n++;
  }
  return 0;
}
int fibo(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return(fibo(n-1)+fibo(n-2));
}