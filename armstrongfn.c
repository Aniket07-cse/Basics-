#include <stdio.h>
#include <math.h>
int armstrong(int n);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
int armstrong(int n)
{
    int i=0,m=0,s,num;
    num=n;
    while (num!=0)
    {
        num=num/10;
        i++;
    }
    num=n;
    while(num>0)
    {
        s=num%10;
         m = (int)round(pow(s, i)) + m;
        //m=pow(s,i)+m;
        num=num/10;
    }
    if(m==n)
    {
        printf("The number is a armstrong number\n");
    }
    else 
    {
        printf("The number is not an armstrong number\n");
    }
    return m;

}