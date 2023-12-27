#include<stdio.h>

void main()
{
	int n,i;
	int fact=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	

	for(i=1;i<=n;i++)
	{
			fact = fact*i;
}
			printf("The factorial number of %d is : %d",n,fact);
	
	
	
}
