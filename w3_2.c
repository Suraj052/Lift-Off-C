#include <stdio.h>

int fact(int n)
{
    int i,p=1;
    for(i=n;i>=1;i--)
    {
        p*=i; 
    }
    return p;
}

int main()
{
    printf("\t\tFACTORIAL OF NUMBER USING FUNCTION\n\n");
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int result;
    result=fact(a);
    printf("\nThe FACTORIAL of the number is:  %d",result);
}