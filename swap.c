#include <stdio.h>//Write a function to swap two numbers using function call.
int swap(int n1a,int n2b);
/*{
    n1a=n1a+n2b;//a=5  b=10 a=5+10=15
    n2b=n1a-n2b;//a=15 b=10 b=15-10=5
    n1a=n1a-n2b;//a=15 b=5  a=15-5=10
    swap(n1a,n2b);
}*/
int main()
{
    int a,b;
    printf("Enter two numbers you want to swap\n");
    scanf("%d %d",&a,&b);
    printf("\nThe numbers before swapping\n");
    printf("\n%d and %d\n",a,b);
    swap(a,b);
    printf("\nThe number after swapping is\n");
    printf("%d and %d",swap(a,b));
    return 0;
}
int swap(int n1a,int n2b)
{
    n1a=n1a+n2b;//a=5  b=10 a=5+10=15
    n2b=n1a-n2b;//a=15 b=10 b=15-10=5
    n1a=n1a-n2b;//a=15 b=5  a=15-5=10
}


//This topic is of the pointer so skip it for now 
