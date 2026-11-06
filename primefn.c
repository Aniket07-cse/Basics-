#include <stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter a number you want to check as prime or not");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int n)
{
    if(n<=0)
    {
        printf("It is not a prime number as its 0");
    
    return 0;
}

    
        for (int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        printf("This is not a prime number%d\n",n);
    return 0;
    }

 
    printf("The number is a prime number%d\n",n);
return 1;
}


