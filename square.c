#include <stdio.h>
#include <math.h>
int square(int n);
int main()
{
    int n;
    printf("Enter the number you want square:\n");
    scanf("%d",&n);
    printf("The square of the two numbers is %d",square(n));
    return 0;
}
int square(int n)
{
    //printf("Enter the number you want square:\n");
    //scanf("%d",&n);
    return pow(n,2);
}