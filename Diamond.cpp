#include <stdio.h>
main()
{
	int k=0;
	for(int i=1;i<=5;i++)
	{
		i<=3?k++:k--;
		int print=1;
		for(int j=1;j<=5;j++)
		{
		if(j>=4-k && j<=2+k)
		{
			printf("%d",print);
			print++;
			}
			else
			printf(" ");	
		}
		printf("\n");
	}
}