#include <stdio.h>
int minimum(int n1,int n2,int n3);
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers to find the minimum of the three\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("The smallest of the three numbers is %d\n",minimum(n1,n2,n3));
    return 0;
}
int minimum(int n1,int n2,int n3)
{
    if (n1>n2 && n2<n3){
    //printf("The smallest of the three numbers is%d\n",n2);[The printf statement is not used here becauseit prints every time the each statement]
    return n2;
    }  
    else if (n2>n1 && n1<n3)
    {
      //  printf("The smallest of the three numbers is%d\n",n1);
    return n1;
    }
    else 
    {
        //printf("The smallest of the three numbers is%d\n",n3);
    return n3;
}
}

