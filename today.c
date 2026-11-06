#include <stdio.h>
int main()
{
    int num1,num2,i,hcf=0;
    printf("Enter two numbers.\n");
    scanf("%d%d",&num1,&num2);
    int min=(num1<num2)?num1:num2;
    for(i=1;i<=min;i++)
    {
        if(num1%i==0&&num2%i==0)
       
    hcf=i;
    }
     printf("The HCF of two numbers is %d",hcf);
return 0;
}