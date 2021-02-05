#include <stdio.h>

//ARITHMETIC OPERATIONS ON TWO NUMBERS

int main()
{
    printf("ARITHMETIC OPERATIONS ON TWO NUMBERS \n\n");
    int a;
    printf("Enter the first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the second number: ");
    scanf("%d",&b);
    int c,d,e,g;
    float f;
    c=a+b;
    d=a-b;
    e=a*b;
    f=(float)a/b;
    g=a%b;
    printf("\n");
    printf("The ADDITION of two numbers is: %d \n",c);
    printf("The SUBTRACTION of two numbers is: %d \n",d);
    printf("The MULTIPLICATION of two numbers is: %d \n",e);
    printf("The DIVISION of two numbers is: %.2f \n",f);
    printf("The MODULUS of two numbers is: %d \n",g);
    return 0;
}