#include <stdio.h>
int reverse(int n);
int main()
{
   int n;
   printf("Enter the number whose reverse you want\n");
   scanf("%d",&n);
   printf("The reversed digit is %d\n",reverse(n));
   return 0;
}
int reverse(int n)
{
    int r,s=0;
    while (n>0)
    {
    r=n%10;
    s=(s*10)+r;
    n=n/10;
    }
    return s;
}