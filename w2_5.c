#include <stdio.h>
int main()
{
	int i=3,j;
	j=2*i-1;
	int a;
	for(a=1;a<=j;a++)
	{
		int b;
		for(b=1;b<=j;b++)
		{
			if (b==a || b==(j-a+1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}