#include <stdio.h>
int palindrome(int n);
int main()
{
    int n,num;
    //num=n;//HERE WE CAN'T WRITE THIS AS ITS CONSIDERED A GARABAGE VALUE BEFORE SCANF
    printf("Enter the number you want to check as palindrome or not:\n");
    scanf("%d",&n);
    num=n;
    int f=palindrome(n);
    if (f==num)
    printf("The number is a palindrome number");
    else 
    printf("The number is not a palindrome number");
    return 0;
}
int palindrome(int n)
{
    int r,s=0;
   
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    return s;
    
}