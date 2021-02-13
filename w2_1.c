#include <stdio.h>
int main()
{
    int n,sum=0;                   //n=number to be given by the user
    printf("Enter a number : ");
    scanf("%d",&n);
    
    //Using while loop to get each digit of the number and add them
    while(n!=0)
    {
        sum=sum+(n%10);
        n=(n/10);
    }
    printf("The sum of digits are: %d",sum);
    return 0;
}