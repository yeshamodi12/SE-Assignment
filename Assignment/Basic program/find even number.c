//find even numbers from 
#include<stdio.h>
int main(){
	int i,number;
	printf("enter the maximum limit number:");
	scanf("%d",&number);
	printf("even numbersbetween 0 to %d are :\n",number);
	for (i = 1;i <= number; i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
}
