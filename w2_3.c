#include <stdio.h>

int main()
{
    printf("...TO CALCULATE THE NUMBER OF WORDS...\n\n");
    
    char sr[100];                                                            //sr= string to be given a input by user
    printf("Enter a string: ");
    scanf("%[^\n]s",&sr);                                                                 //To read the string given by user
    printf("\n");
    printf("STRING: %s",sr);
    int i,T=1;
    for(i=0;sr[i]!='\0';i++)
    {
        if(sr[i]==' ' && sr[i+1]!=' ')    
        //Two words can be separted by a either space or new line or horizontal tab character
    
        {
            T++;
        }                                                
    }

    printf("\n\nTotal number of words: %d",T);
    return 0;
}