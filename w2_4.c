#include <stdio.h>

int main()
{   
    printf("...MAX AND MIN NUMBER IN A ARRAY...\n\n");
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
    int i,max=ar[0],min=ar[0];      //Initializing the max & min as the first element of array
    for(i=1;i<l;i++)
    {
        if (ar[i]>max)
        {
            max=ar[i];
        }
    }
    for(i=1;i<l;i++)
    {
        if (ar[i]<min)
        {
            min=ar[i];
        }
    }
    
    printf("MAXIMUM VALUE: %d\n",max);
    printf("MINIMUM VALUE: %d",min);

}