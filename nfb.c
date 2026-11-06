#include <stdio.h>
int fbo(int n);
int main()
{
    int n;
    printf("Enter the number upto which you want the fibonacci series\n");
    scanf("%d",&n);
    fbo(n);
    return 0;
}
int fbo(int n)
{
    if (n==0 || n==1)
    {
        printf("%d",n);
        return n;
    }
    int fbt1=fbo(n-1);
    int fbt2=fbo(n-2);
    int fbt= fbt1+fbt2;
    printf("fibonacci series of %d is %d\n",n,fbt);
        return fbt;
}