#include <stdio.h>

//Defining function

int sqr(int n)                               //sqr=Name of the function
{
    int square;
    square=(n*n);
    return square;
}

//Calliing function

void main()
{
    printf("\t\tSQUARE OF NUMBER USING FUNCTION\n\n");
    int a,result;
    printf("Enter a number: ");
    scanf("%d",&a);
    result=sqr(a);
    printf("\n");
    printf("The SQUARE of the number is: %d",result);
}