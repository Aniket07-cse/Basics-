#include <stdio.h>
int count(int n);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    count(n);
    return 0;
}
int count(int n)
{
    int s,i=0;
    do
    {
       i++;
       n=n/10; /* code */
    } while (n!=0);
    
    /*while(n!=0)     //here we are using this do while loop as 
                        if the user inputs 0, your code will output that 0 has 0 digits 
                        because the condition while (n != 0) immediately fails. In reality,  
                        the number 0 has 1 digit.
                        which is do while loop fixes 
    {
        s=n/10;
        i++;
        n=n/10;
    }*/
    printf("The number of digits in the input number is %d",i);
    return i;
}