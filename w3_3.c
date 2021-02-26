#include <stdio.h>

//FUNCTION FOR GREATEST COMMON FACTOR
int GCD(int p,int q)    
{
    if (q==0)
    {
        return p;
    }
    else
    {
        return GCD(q,p%q);
    }
}
//FUNCTION FOR LOWEST COMMON FACTOR
int LCM(int p,int q)
{
    return ((p*q)/(GCD(p,q)));
}

//MAIN FUNCTION
int main()
{
    printf("\t\tLCM AND GCD OF TWO NUMBERS\n");
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    int r1,r2;                               // r1=GCD r2=LCM
    r1=GCD(a,b);
    r2=LCM(a,b);
    printf("\nTHE GCD IS: %d",r1);
    printf("\nTHE LCM IS: %d",r2);
    return 0;
}

