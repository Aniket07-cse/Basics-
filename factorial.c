#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the number whose factorial you want\n");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factor=fact(n-1);
    int factorial=factor*n;
    return factorial;
}