#include <stdio.h>
int square(int n);
int main()
{
    int n;
    printf("Enter the number you want to take the square");
    scanf("%d",&n);
    printf("The square of the number is%d",square(n));
    return 0;
}
int square(int n)
{
return n*n;
}
