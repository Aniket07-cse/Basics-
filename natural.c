#include <stdio.h>
int natural(int n);
int main()
{
    int n;
    printf("Enter the number till how many sum of the natural numbers are to be calculated\n");
    scanf("%d",&n);
    natural(n);
    return 0;
}
int natural (int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return sum;
}