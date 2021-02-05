#include <stdio.h>

//TEMPERATURE CONVERSION;
//celsius to fahrenheit;

int main()
{
    printf("CELSIUS TO FAHRENHEIT CONVERSION \n\n");
    float c,fh;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&c);
    fh=c*(9.0/5.0)+32;                                     //Relation between celsius and fahrenheit
    printf("\n");
    printf("The temperature in FAHRENHEIT is: %.2f",fh);
    return 0;
}
