#include <stdio.h>

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1) ;
    }
}

int main()
{
    printf("\t\tFACTORIAL OF A NUMBER USING RECURSION\n");
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int result;
    result=fact(a);
    printf("The FACTORIAL of the number is: %d",result);
}