#include <stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter two number you want LCM");
    scanf("%d%d",&num1,&num2);
    for(i=1; ;i++)
    {
        if(i%num1==0 && i%num2==0)//Very important part here i is mod of numbers by the user not the number mod of i in lcm it was the number which was mod of i.
        {
        printf("The LCM of the two numbers are:%d\n",i);
        break;
        }

    }
    return 0;
}