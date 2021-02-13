#include <stdio.h>
int main()
{
    int l,ar[10];                                                    //l=length,ar=array of max size 10 
    printf("Enter the size of array within 10: ");
    scanf("%d",&l);

    //To get the elements of the array by user input
    printf("Enter the elements of  array: \n");
    int j;
    for(j=0;j<l;j++)
    {
        scanf("%d",&ar[j]);
    }
    //To find the sum
    int sum_p=0,sum_e=0;                                            //sum_p=sum of numbers at even POSITION, sum_e=sum of EVEN numbers
    int i;
    for(i=0;i<l;i++)
    {
        int pos;
        pos=i%2;
        if(pos==0)
        {
            sum_p+=ar[i];
        }
        int even;
        even=ar[i]%2;
        if(even==0)
        {
            sum_e+=ar[i];
        }
    }
    printf("\n");
    printf("sum of digits at EVEN POSITION numbers: %d\n",sum_p);
    printf("sum of EVEN NUMBERS: %d",sum_e);
    return 0;
}