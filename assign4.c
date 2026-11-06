#include <stdio.h>
int sumdig(int n);
int main()
{
   int n;
   printf("Enter the number whose digits sum you want\n");
   scanf("%d",&n);
   printf("The sum of the digits of the number is%d\n",sumdig(n));
   return 0;
}
int sumdig(int n)
{
    int r,f=0;
    while(n!=0)
    {
    r=n%10;
    f=r+f;
    n=n/10;
}
return f;
}
