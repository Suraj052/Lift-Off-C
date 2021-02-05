#include <stdio.h>

int main()
{
    int p,c,m,b,cs;                               //p=Physics c=Chemistry m=Mathematics b=Biology cs=Computer Science
    printf("PERCENTAGE AND GRADING SYSTEM \n\n");
    printf("Enter the marks of PHYSICS: ");
    scanf("%d",&p);
    printf("Enter the marks of CHEMISTRY: ");
    scanf("%d",&c);
    printf("Enter the marks of MATHEMATICS: ");
    scanf("%d",&m);
    printf("Enter the marks of BIOLOGY: ");
    scanf("%d",&b);
    printf("Enter the marks of COMPUTER SCIENCE: ");
    scanf("%d",&cs);
    
    //To find the perecentage
    
    int t;           //t=Total Marks
    float per;       //per=Percentage
    t=p+c+m+b+cs;
    per=(float)t/5;  //Total 5 subjects
    printf("\n");
    printf("| PERCENTAGE | : %.2f",per);
   

    //To find the Grade
    printf("\n\n");
    if (per>=90.00)
    {
        printf("...A GRADE...");
    }
    else if (per>=80.00 && per<90.00)
    {
        printf("...B GRADE...");
    }
    else if (per>=70.00 && per<80.00)
    {
        printf("...C GRADE...");
    }
    else if (per>=60.00 && per<70.00)
    {
        printf("...D GRADE...");
    }
    else if (per>=40.00 && per<60.00)
    {
        printf("...E GRADE...");
    }
    else 
    {
        printf("...F GRADE...");
    }
    return 0;
}
