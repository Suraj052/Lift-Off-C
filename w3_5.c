#include <stdio.h>

// Palindrome function
int try(int n,int rev)
{
    if (n==0)
    {
        return rev;
    }
    else
    {
        rev=(rev*10)+(n%10);
        return try(n/10,rev);
    }
}

//Main function
int main()
{
    printf("\t\tPALINDROME TEST OF NUMBER\n");
    int a,result;
    printf("Enter a number: ");
    scanf("%d",&a);
    result=try(a,0);
    if (a==result)
    {
        printf("\n...PALINDROME...");
    }
    else
    {
        printf("\n...NOT PALLINDROME...");
    }
    return 0;
}