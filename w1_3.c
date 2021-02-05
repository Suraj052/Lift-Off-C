#include <stdio.h>

int main()
{
    float r,d,c,a;                 //r=radius, d=diamtere, c=circuference, a=area
    printf("PLAYING WITH CIRCLE \n\n");
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*(r*r);
    printf("\n");
    printf("The Diameter of the circle is: %.2f \n",d);
    printf("The Circumference of the circle is: %.2f \n",c);
    printf("The Area of the circle is: %.2f \n",a);
    return 0;
}
